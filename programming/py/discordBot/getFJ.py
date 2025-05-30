import time
import discord
from discord.ext import commands
import yt_dlp

# Setup permissons needed? I think? 
intents = discord.Intents.default()
intents.voice_states = True
intents.members = True
intents.message_content = True # Needed to read message content

# Setup command prefix
bot = commands.Bot(command_prefix="!", intents=intents)

FFMPEG_OPTIONS = {
        'options': '-vn'
}

YDL_OPTIONS = {
        'format': 'bestaudio',
        'noplaylist': 'True'
}

TARGET_USER_ID = 198308106067771392
first_tick = False

@bot.event
async def on_ready():
    print(f'Logged in as {bot.user}!')

@bot.event
async def on_voice_state_update(member, before, after):
    # User joined a voice channel
    if before.channel is None and after.channel is not None:
        print(f'{member.display_name} joined {after.channel.name}')
    elif before.channel is not None and after.channel is None:
        print(f'{member.display_name} left {before.channel.name}')
    elif before.channel != after.channel:
        print(f'{member.display_name} moved from {before.channel.name} to {after.channel.name}')
    
    # TARGET_USER_ID = 265289461883994123 # Josh's ID

    if (
        member.id == TARGET_USER_ID and 
        before.channel is None and 
        after.channel is not None and 
        before.channel != after.channel
       ):
       
        nerds = [nerd for nerd in after.channel.members]
        print(nerds)
        for nerd in nerds:
            if nerd.id == TARGET_USER_ID:
                print("He's here") # Debug
                channel = nerd.voice.channel
                await channel.connect()
                print('bot joined channel')
                guild = nerd.guild                
                vc = discord.utils.get(bot.voice_clients, guild=guild) 
                url = 'https://www.youtube.com/watch?v=-aLYvZ5sX28' # Insert funny URL
                '''
                with yt_dlp.YoutubeDL(YDL_OPTIONS) as ydl:
                    info = ydl.extract_info(url, download=False)
                    audio_url = info['url']
                    title = info.get('title', 'Unknown title')
                ''' 
                # vc.stop()
                time.sleep(1)
                vc.play(discord.FFmpegPCMAudio('shoebody.mp3')) # audio_url, **FFMPEG_OPTIONS)) #Used for above code if not commented out. 
                # print(f"Now playing: **{title}**") Used if above code isn't commented out
                print("Now playing shoebody")
                if len(nerds) == 1:
                    vc.stop()
                    await channel.discconect()

# Set up a variable that get flips one time; It will cause this bot to join the channel, and start playing smut when josh joins a channel that I'm also in. 

# I need to grab their nickname, and assign it to a variable, to log their ID? Maybe... Not sure. 

@bot.command()
async def hello(ctx):
    user = ctx.author
    server = ctx.guild
    channel = ctx.channel
    print(f'Invoked by: {user.name}, Server: {server}, Channel: {channel}')
    await ctx.send(f'Hello, {user.mention}!')

@bot.command()
async def debug(ctx):
    await ctx.send(dir(ctx))


