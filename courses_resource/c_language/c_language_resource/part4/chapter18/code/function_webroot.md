---
title: Wifi配网主页
description: 
published: true
date: 2024-05-25T05:31:05.013Z
tags: 
editor: markdown
dateCreated: 2024-05-24T05:55:09.831Z
---

> 注意：以下代码无法单独运行，必须结合课程中的工程使用{.is-success}

```C
const char webconfig_mainhtml[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WIFI配置</title>
</head>
<body>
    <h1 align="center">Connect device to your WiFi</h1>
    <br>
    <form action="/wifi">
        <table align="center" frame="box">
            <tr>
                <td><input type="radio" name="method" value="Auto" checked onclick="Auto_wifi()">扫描WIFI</td>
                <td><input type="radio" name="method" value="Manual" onclick="Manual_wifi()">手动输入</td>
            </tr>
            <tr id="scan">
                <td align="right">SSID:</td>
                <td>
                    <select name="ssid" style="width:200px">
                        <option selected>Select a Network</option>
                        %WIFI_LIST%
                    </select>
                </td>
            </tr>
            <tr id="Manual">
                <td align="right">SSID:</td>
                <td><input name="ssid_manual" style="width:200px"></td>
            </tr>
            <tr>
                <td align="right">Password:</td>
                <td><input name="password" style="width:200px"></td>
            </tr>
            <tr>
                <td></td>
                <td align="right"><button type="submit" style="width:100px">开始配置</button></td>
            </tr>
        </table>
    </form>
    <script>
        document.getElementById("Manual").style.display = "none";
        function Auto_wifi() {
            document.getElementById("scan").style.display = "table-row";
            document.getElementById("Manual").style.disable = true;
            document.getElementById("Manual").style.display = "none";
            window.location.reload();
        }
        function Manual_wifi() {
            document.getElementById("scan").style.display = "none";
            document.getElementById("scan").style.disable = true;
            document.getElementById("Manual").style.display = "table-row";
        }
    </script>
</body>
</html>
)rawliteral";
```

```C

const char webroot_mainhtml[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WIFI STA Mode</title>
</head>
<body>
    <h1 align="center">ESP32 Connected to %WIFI_SSID%</h1>
    <br>
    <div align="center">
        <button type="button" onclick="deleteConfig()" style="width:200px; height:60px">删除配置</button>
    </div>
    <script>
        function deleteConfig() {
            var xhr = new XMLHttpRequest();
            xhr.open("GET", "/rmconfig", true);
            xhr.send();
            xhr.onload = function() {
                if (xhr.status === 200) {
                    alert("配置已删除");
                    window.location.reload();
                } else {
                    alert("删除配置失败");
                }
            };
        }
    </script>
</body>
</html>
)rawliteral";
