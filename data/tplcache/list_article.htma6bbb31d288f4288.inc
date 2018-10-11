<?php
$z[0]=Array("field","",378,397);
$z[0][4]['name']="title";
$z[1]=Array("global","",398,424);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",465,494);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",534,592);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1103,1138);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n<li class=\"\"><a href=\"[field:typelink/]\" target=\"\">[field:typename/]</a></li>\r\n",1463,1675);
$z[5][4]['type']="son";
$z[5][4]['currentstyle']="<li class='active'><a href='~typelink~' >~typename~</a> </li>";
$z[6]=Array("field","",1813,1842);
$z[6][4]['name']="position";
$z[7]=Array("list","\r\n          <li class=\" not-animated\"  data-animate=\"slideInUp\">\r\n            <div class=\"media media-x\">\r\n              <div class=\"media_img float-left\"><a  href=\"[field:arcurl/]\" ><img class=\"lazy\"  src=\"[field:litpic/]\"  data-original='[field:litpic/]' alt='[field:title/]'></a></div>\r\n              <div class=\"media-body\">\r\n                <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n                <div class='time'>[field:pubdate function=\"MyDate('Y/m/d',@me)\"/]</div>\r\n                <p class=\"desc\">[field:description function=\"cn_substr(@me,255)\"/]...<a href='[field:arcurl/]'  target=\"_blank\">...More&gt;&gt;</a></p>\r\n              </div>\r\n            </div>\r\n          </li>\r\n		  ",2076,2842);
$z[7][4]['pagesize']="6";
$z[8]=Array("pagelist","",2965,3030);
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",3115,3152);
$z[9][4]['filename']="footer.htm";

?>