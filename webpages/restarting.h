/*
  +----------------------------------------------------------------------+
  | CoogleIOT for ESP8266                                                |
  +----------------------------------------------------------------------+
  | Copyright (c) 2017 John Coggeshall                                   |
  +----------------------------------------------------------------------+
  | Licensed under the Apache License, Version 2.0 (the "License");      |
  | you may not use this file except in compliance with the License. You |
  | may obtain a copy of the License at:                                 |
  |                                                                      |
  | http://www.apache.org/licenses/LICENSE-2.0                           |
  |                                                                      |
  | Unless required by applicable law or agreed to in writing, software  |
  | distributed under the License is distributed on an "AS IS" BASIS,    |
  | WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or      |
  | implied. See the License for the specific language governing         |
  | permissions and limitations under the License.                       |
  +----------------------------------------------------------------------+
  | Authors: John Coggeshall <john@coggeshall.org>                       |
  +----------------------------------------------------------------------+
*/

#ifndef COOGLEIOT_WEBPAGES_RESTART_H_
#define COOGLEIOT_WEBPAGES_RESTART_H_

const char WEBPAGE_Restart[] PROGMEM = R"=====(
<html>
  <head>
    <title>CoogleIOT Firmware Restarting</title>
    <link href="/css" type="text/css" rel="stylesheet">
    <meta name="viewport" content="width=device-width, initial-scale=1">
  </head>
  <body>
    <div class="row">
        <div class="card">
            <div class="section" style="text-align:center">
                <h3>Restarting CoogleIOT</h3>
                <p>Please wait, this CoogleIOT device is restarting.</p>
                <p>You will be returned to the setup page upon completion</p>
                <div class="spinner-donut large center-block"></div>
                <p>You may have to reconnect to the AP to continue</p>
            </div>
        </div>
    </div>
    <script src="/jquery"></script>
    <script>
        $(document).ready(function() {
          setTimeout(function() {
            
            console.log("Checking Device Status");
            
            $.ajax({
              url: "/status/api",
              success: function(result) {
                if(result.success) {
                  window.location.href = "/";
                }
              }
            });
            
          }, 5000);
        })
    </script>
  </body>
</html>
)=====";


#endif /* COOGLEIOT_WEBPAGES_HOME_H_ */
