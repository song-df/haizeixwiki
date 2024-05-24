---
title: Wifi配网主页
description: 
published: true
date: 2024-05-24T05:55:09.832Z
tags: 
editor: markdown
dateCreated: 2024-05-24T05:55:09.831Z
---

```C
void webroot(AsyncWebServerRequest *request) {
  // 设置配网Web页面
  content = "<!DOCTYPE html><html><head><meta charset=\"utf-8\"><title>WIFI配置</title></head><body>";
  content += "<h1 align=\"center\">Connect device to your WiFi</h1>";
  content += "<br><form action=\"/wifi\"><table align=\"center\" frame=\"box\">";
  content += "<tr><td><input type=\"radio\" name=\"method\" value=\"Auto\" checked onclick=\"Auto_wifi()\">扫描WIFI</td>";
  content += "<td><input type=\"radio\" name=\"method\" value=\"Manual\" onclick=\"Manual_wifi()\">手动输入</td></tr>";
  content += "<tr id=\"scan\"><td align=\"right\">SSID:</td><td><select name=\"ssid\" style=\"width:200px\">";
  content += "<option selected>Select a Network</option>";
  
  for (const auto& ssid : wifiList) {
    content += "<option value=\"" + ssid + "\">" + ssid + "</option>";
  }
  
  content += "</select></td></tr>";
  content += "<tr id=\"Manual\"><td align=\"right\">SSID:</td><td><input name=\"ssid_manual\" style=\"width:200px\"></td></tr>";
  content += "<tr><td align=\"right\">Password:</td><td><input name=\"password\" style=\"width:200px\" ></td><tr>";
  content += "<tr><td></td><td align=\"right\"><button type=\"submit\" style=\"width:100px\">开始配置</button></td></tr></table></form></body>";
  content += "<script>document.getElementById(\"Manual\").style.display = \"none\";function Auto_wifi() {";
  content += "document.getElementById(\"scan\").style.display = \"table-row\";";
  content += "document.getElementById(\"Manual\").style.disable = true;";
  content += "document.getElementById(\"Manual\").style.display = \"none\";";
  content += "window.location.reload();}";
  content += "function Manual_wifi() {";
  content += "document.getElementById(\"scan\").style.display = \"none\";";
  content += "document.getElementById(\"scan\").style.disable = true;";
  content += "document.getElementById(\"Manual\").style.display = \"table-row\";";
  content += "}</script></html>";

  request->send(200, "text/html", content);
}