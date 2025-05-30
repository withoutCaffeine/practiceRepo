import yt_dlp

def download_audio(url, filename="audio.mp3"):
    ydl_opts = {
            'format': 'bestaudio/best',
            'outtmpl': filename,
            'postprocessors': [{
                'key': 'FFmpegExtractAudio',
                'preferredcodec': 'mp3', # Can also be wav
                'preferredquality': '192',
            }],
        }

    with yt_dlp.YoutubeDL(ydl_opts) as ydl: 
        ydl.download([url])

download_audio("https://www.youtube.com/watch?v=mRNtw_Tc1Jc", "shoebody")
