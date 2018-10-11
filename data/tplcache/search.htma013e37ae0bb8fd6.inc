<?php
$z[0]=Array("global","",388,414);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",455,484);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",524,582);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",1093,1128);
$z[3][4]['filename']="head.htm";
$z[4]=Array("channel","\r\n<li class=\"\"><a href=\"[field:typelink/]\" target=\"\">[field:typename/]</a></li>\r\n",1453,1665);
$z[4][4]['type']="son";
$z[4][4]['currentstyle']="<li class='active'><a href='~typelink~' >~typename~</a> </li>";
$z[5]=Array("global","",1818,1873);
$z[5][4]['name']="keyword";
$z[5][4]['function']="RemoveXSS(@me)";
$z[6]=Array("list","\r\n          <li class=\" not-animated\"  data-animate=\"slideInUp\">\r\n            <div class=\"media media-x\">\r\n              <div class=\"media_img float-left\"><a  href=\"[field:arcurl/]\" ><img class=\"lazy\"  src=\"[field:litpic/]\"  data-original='[field:litpic/]' alt='[field:title/]'></a></div>\r\n              <div class=\"media-body\">\r\n                <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n                <div class='time'>[field:pubdate function=\"MyDate('Y/m/d',@me)\"/]</div>\r\n                <p class=\"desc\">[field:description function=\"cn_substr(@me,180)\"/]...<a href='[field:arcurl/]'  target=\"_blank\">...More&gt;&gt;</a></p>\r\n              </div>\r\n            </div>\r\n          </li>\r\n		  ",2126,2890);
$z[6][4]['perpage']="6";
$z[7]=Array("pagelist","",3012,3041);
$z[7][4]['listsize']="4";
$z[8]=Array("include","",3126,3163);
$z[8][4]['filename']="footer.htm";

?>