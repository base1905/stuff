#!/bin/bash

echo y | exec $(rm -rf ~/Library/Application\ Support/Slack/Cache/*)
echo y | exec $(rm -rf ~/Library/Application\ Support/Slack/Service\ Worker/CacheStorage/*)
echo y | exec $(rm -rf ~/Library/Application\ Support/discord/Cache/*)
echo y | exec $(rm -rf ~/Library/Application\ Support/Code/Cache/*)
echo y | exec $(rm -rf ~/Library/Application\ Support/Code/User/workspaceStorage/*)
echo y | exec $(rm -rf ~/Library/Application\ Support/Code/CachedData/*)
echo y | exec $(rm -rf ~/Library/Developer/CoreSimulator/Devices/*)
echo y | exec $(rm -rf ~/Library/Caches/*)
echo y | exec $(rm -rf ~/Library/Containers/com.apple.AppStore/Data/Library/Caches/*)
echo y | exec $(rm -rf ~/Library/Group\ Containers/*)
echo y | exec $(rm -rf ~/Library/Application\ Support/Telegram\ Desktop)
du -sh ~/Library/
exec $(defaults write NSGlobalDomain InitialKeyRepeat 15)
exec $(defaults write NSGlobalDomain KeyRepeat 2)
