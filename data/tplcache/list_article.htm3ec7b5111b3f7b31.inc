<?php
$z[0]=Array("field","",352,371);
$z[0][4]['name']="title";
$z[1]=Array("global","",372,398);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",439,468);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",508,566);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",641,676);
$z[4][4]['filename']="head.htm";
$z[5]=Array("list","\r\n            <li>\r\n              <h4> <a href=\"[field:arcurl/]\" title=\"[field:title/]\"> [field:title/] </a> </h4>\r\n              <p class=\"des\">[field:description function=\"cn_substr(@me,255)\"/]...</p>\r\n              <p class=\"info\"> <span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span> <span>admin</span> <span><i class=\"icon wb-eye margin-right-5\" aria-hidden=\"true\"></i>[field:click/]</span> </p>\r\n            </li>\r\n			",1204,1673);
$z[5][4]['pagesize']="5";
$z[6]=Array("pagelist","",1802,1867);
$z[6][4]['listitem']="index,end,pre,next,pageno";
$z[6][4]['listsize']="5";
$z[7]=Array("field","",2669,2727);
$z[7][4]['name']="typeid";
$z[7][4]['function']="GetTopTypename(@me)";
$z[8]=Array("channel","\r\n            <li><a href=\"[field:typelink/]\" title=\"[field:typename/]\">[field:typename/]</a></li>\r\n",2762,3006);
$z[8][4]['type']="son";
$z[8][4]['currentstyle']="<li><a href='~typelink~' class='thisclass'>~typename~</a></li>";
$z[9]=Array("arclist","\r\n              <li class=\"list-group-item\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></li>\r\n			  ",3168,3379);
$z[9][4]['typeid']="";
$z[9][4]['row']="5";
$z[9][4]['flag']="c";
$z[9][4]['titlelen']="50";
$z[9][4]['orderby']="pubdate";
$z[10]=Array("include","",3484,3522);
$z[10][4]['filename']="footnav.htm";
$z[11]=Array("include","",3524,3561);
$z[11][4]['filename']="footer.htm";

?>