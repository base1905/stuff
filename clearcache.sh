#!/bin/bash

echo y | exec $(rm -rf ~/Library/Application\ Support/Slack/*)
echo y | exec $(rm -rf ~/Library/Application\ Support/discord/Cache/*)
echo y | exec $(rm -rf ~/Library/Application\ Support/Code/Cache/*)
echo y | exec $(rm -rf ~/Library/Caches/*)
echo y | exec $(rm -rf ~/Library/Application\ Support/Google/*)
echo y | exec $(rm -rf ~/Library/Containers/com.apple.AppStore/Data/Library/Caches/*)
echo y | exec $(rm -rf ~/Library/Group\ Containers/*)
echo y | exec $(rm -rf ~/Library/Application\ Support/Telegram\ Desktop)
