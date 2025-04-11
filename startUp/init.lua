-- Auto-install packer if not already installed
local ensure_packer = function()
  local fn = vim.fn
  local install_path = fn.stdpath("data") .. "/site/pack/packer/start/packer.nvim"
  if fn.empty(fn.glob(install_path)) > 0 then
    fn.system({ "git", "clone", "--depth", "1", "https://github.com/wbthomason/packer.nvim", install_path })
    vim.cmd("packadd packer.nvim")
    return true
  end
  return false
end

local packer_bootstrap = ensure_packer()

-- Plugin setup with packer
require("packer").startup(function(use)
  use "wbthomason/packer.nvim" -- Packer manages itself

  -- 🌌 Carbonfox theme from nightfox.nvim
  use "EdenEast/nightfox.nvim"

  -- Auto sync after install
  if packer_bootstrap then
    require("packer").sync()
  end
end)

-- Enable true color support
vim.opt.termguicolors = true

-- Apply Carbonfox colorscheme
vim.cmd("colorscheme carbonfox")

vim.opt.number = true -- show line numbers
vim.opt.relativenumber = true -- Show line numbers relative to current line
vim.opt.expandtab = true -- Use spaces instead of tabs
vim.opt.tabstop = 2 -- Number of spaces for indentation
vim.opt.shiftwidth = 2
vim.opt.softtabstop = 2 -- Makes backspace work correctly

