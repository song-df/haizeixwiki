---
title: 18.6.ledctrl_index_html
description: 
published: true
date: 2024-05-12T07:35:41.980Z
tags: 
editor: markdown
dateCreated: 2024-05-12T07:35:41.980Z
---

```
<!DOCTYPE HTML><html>
<head>
<style>
  <style>
    /* Flexbox layout to center the button */
    body {
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
      margin: 0;
    }
    html {
      font-family: Arial;
      display: inline-block;
      margin: 0px auto;
      text-align: center;
    }

    h2 {
      font-size: 3.0rem;
      text-align: center;
    }

    p {
      font-size: 3.0rem;
    }

    .units {
      font-size: 1.2rem;
    }

    .dht-labels {
      font-size: 1.5rem;
      vertical-align: middle;
      padding-bottom: 15px;
    }

    /* Button Style */
    .custom-button {
      display: inline-block;
      background-color: #007BFF;
      color: white;
      border-radius: 10px;
      padding: 20px 40px;
      font-size: 2.5rem;
      cursor: pointer;
      transition: background-color 0.3s ease;
    }

    .custom-button:hover {
      background-color: #0056b3;
    }
</style>
</head>
<body>
  <div><h2>ESP32 LED Control</h2></div>
  <p>
    <button onclick="toggleLED()" class="custom-button">Toggle LED</button>
  </p>
</body>
<script>
function toggleLED() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      // 请求成功后，更新按钮文本以反映LED状态
      var button = document.querySelector("button");
      if (button.innerText === "Toggle LED") {
        button.innerText = "LED ON";
      } else {
        button.innerText = "Toggle LED";
      }
    }
  };
  
  // 发送LED控制请求到服务器端
  var ledState = document.querySelector("button").innerText === "Toggle LED" ? 1 : 0;
  xhttp.open("POST", "/led", true);
  xhttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xhttp.send("state=" + ledState);
}
</script>
</html>
