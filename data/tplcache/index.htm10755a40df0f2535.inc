<?php
$z[0]=Array("global","",380,406);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",450,480);
$z[1][4]=array();
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",517,544);
$z[2][4]=array();
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",1424,1459);
$z[3][4]=array();
$z[3][4]['filename']="head.htm";
$z[4]=Array("arclist","\r\n          <li style=\"background-image:url([field:picname/])\"></li>\r\n          ",1660,1789);
$z[4][4]=array();
$z[4][4]['typeid']="18";
$z[4][4]['row']="5";
$z[5]=Array("arclist","\r\n        <div class=\"xs6 xl12 left\">\r\n          <div class=\"item\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\">\r\n            <div class=\"overlay\">\r\n              <h3>[field:title/]</h3>\r\n              <p>[field:description function=\"cn_substr(@me,100)\"/]...</p>\r\n            </div>\r\n            <div class=\"zoomimgs\" style=\"background-image:url([field:picname/])\"></div>\r\n            </a></div>\r\n        </div>\r\n        ",2220,2729);
$z[5][4]=array();
$z[5][4]['typeid']="2";
$z[5][4]['limit']="0,1";
$z[5][4]['titlelen']="50";
$z[5][4]['orderby']="pubdate";
$z[6]=Array("arclist","\r\n            <div class=\"x6 item\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\">\r\n              <div class=\"overlay\">\r\n                <h3>[field:title/]</h3>\r\n                <p>[field:description function=\"cn_substr(@me,100)\"/]...</p>\r\n              </div>\r\n              <div class=\"zoomimgs\" style=\"background-image:url([field:picname/])\"></div>\r\n              </a></div>\r\n            ",2804,3281);
$z[6][4]=array();
$z[6][4]['typeid']="2";
$z[6][4]['limit']="2,4";
$z[6][4]['titlelen']="50";
$z[6][4]['orderby']="pubdate";
$z[7]=Array("sql"," \r\n              \r\n              [field:content  function='cn_substr(html2text(@me),220)'/]\r\n              \r\n              ",3959,4153);
$z[7][4]=array();
$z[7][4]['sql']="Select content from dede_arctype where id=1";
$z[8]=Array("type"," <a href=\"[field:typelink/]\" title=\"[field:typename/]\" target=\"_self\" class=\"more\">了解更多</a>",4484,4617);
$z[8][4]=array();
$z[8][4]['typeid']="1";
$z[9]=Array("arclist","\r\n        <div class=\"xm3 xs3 xl6 margin-large-bottom\">\r\n          <div class=\"item item1\">\r\n            <div class=\"media-img\"><a href=\"[field:arcurl/]\" title=\"[field:title/]\"  class=\"artzoomimgs\" style=\"background-image:url([field:picname/])\"></a></div>\r\n          </div>\r\n        </div>\r\n        ",5070,5449);
$z[9][4]=array();
$z[9][4]['typeid']="5";
$z[9][4]['row']="4";
$z[9][4]['titlelen']="50";
$z[9][4]['orderby']="pubdate";
$z[10]=Array("type","\r\n              <div class=\"fh5co-heading\">\r\n                <h3>[field:typename/]</h3>\r\n                <a href=\"[field:typelink/]\" class=\"more\">更多</a> </div>\r\n              ",5795,6009);
$z[10][4]=array();
$z[10][4]['typeid']="11";
$z[11]=Array("arclist","\r\n                <li>\r\n                  <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a><span class=\"float-right time\">[[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]]</span></h3>\r\n                </li>\r\n                ",6091,6418);
$z[11][4]=array();
$z[11][4]['typeid']="11";
$z[11][4]['row']="5";
$z[11][4]['titlelen']="50";
$z[11][4]['orderby']="pubdate";
$z[12]=Array("type","\r\n              <div class=\"fh5co-heading\">\r\n                <h3>[field:typename/]</h3>\r\n                <a href=\"[field:typelink/]\" class=\"more\">更多</a> </div>\r\n              ",6610,6824);
$z[12][4]=array();
$z[12][4]['typeid']="12";
$z[13]=Array("arclist","\r\n                <li>\r\n                  <h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a><span class=\"float-right time\">[[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]]</span></h3>\r\n                </li>\r\n                ",6906,7233);
$z[13][4]=array();
$z[13][4]['typeid']="12";
$z[13][4]['row']="5";
$z[13][4]['titlelen']="50";
$z[13][4]['orderby']="pubdate";
$z[14]=Array("include","",7408,7445);
$z[14][4]=array();
$z[14][4]['filename']="footer.htm";

?>