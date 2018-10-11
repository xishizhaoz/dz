<?php
$z[0]=Array("global","",362,388);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",429,458);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",498,556);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",631,666);
$z[3][4]['filename']="head.htm";
$z[4]=Array("global","",1271,1326);
$z[4][4]['name']="keyword";
$z[4][4]['function']="RemoveXSS(@me)";
$z[5]=Array("list","\r\n					<li class=\"list-group-item\">\r\n						<h4>\r\n							<a href=\"[field:arcurl/]\">\r\n							[field:title/]\r\n							</a>\r\n						</h4>\r\n						<a class=\"search-result-link\" href=\"[field:arcurl/]\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]\r\n						</a>\r\n						<p>[field:description function=\"cn_substr(@me,255)\"/]...</p>\r\n					</li>\r\n					 ",1570,1959);
$z[5][4]['perpage']="10";
$z[5][4]['titlelen']="60";
$z[6]=Array("pagelist","",2037,2066);
$z[6][4]['listsize']="4";
$z[7]=Array("include","",2654,2692);
$z[7][4]['filename']="footnav.htm";
$z[8]=Array("include","",2694,2731);
$z[8][4]['filename']="footer.htm";

?>