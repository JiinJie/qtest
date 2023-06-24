@echo off
SetLocal EnableDelayedExpansion
(set PATH=F:\software\Qt\Qt5.12.12\5.12.12\msvc2015_64\bin;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=F:\software\Qt\Qt5.12.12\5.12.12\msvc2015_64\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=F:\software\Qt\Qt5.12.12\5.12.12\msvc2015_64\plugins
)
%*
EndLocal
