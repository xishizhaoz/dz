<li class="list-group-item">
                <div class="media">
                  <div class="media-left"> <i class="icon wb-user-circle" aria-hidden="true"></i> </div>
                  <div class="media-body">
                    <h4 class="media-heading"> <small class="pull-right">[field:times/]{dede:datalist}
<table class='listtable' cellspacing="1">
<?php
if(!empty($fields))
{
		echo '<tbody>';
		echo '<tr><td bgcolor="#eeeeee" width="20%">id</td>';
		echo '<td bgcolor="#eeeeee"><div class="left">'.$fields['id'].'</div><div class="right"><a href="diy.php?action=view&diyid='.$diy->diyid.'&id='.$fields['id'].'" target="_blank">详细...</a> &nbsp;</div></td></tr>';
		foreach($fieldlist as $field=>$fielddata)
		{
			if($fields[$field]=='') continue;
			if($fielddata[1]=='img')
			{
				$fields[$field] = "<a href='{$fields[$field]}' target='_blank'><img src='img/addon.gif' border='0' /> 图片附件</a>\r\n";
			}
			else if($fielddata[1]=='addon')
			{
				$fields[$field] = "<a href='{$fields[$field]}' target='_blank'><img src='img/addon.gif' border='0' /> 其它附件</a>";
			}
			if($fielddata[1]=='datetime')

	            {

	               $fields[$field] = GetDateTimeMk($fields[$field]);

	            }
			else
			{
				if($fielddata[1]=='htmltext') $fields[$field] = html2text($fields[$field]);
				else $fields[$field] = htmlspecialchars($fields[$field]);
				if( strlen($fields[$field]) > 250 )
				{
					$fields[$field] = cn_substr( $fields[$field], 250).'...';
				}
			}
			echo "<tr><td bgcolor='#ffffff'>{$fielddata[0]}</td><td bgcolor='#ffffff'>{$fields[$field]}</td></tr>\r\n";
		}
		echo '</tbody>';
}else{
	echo "<tr><td bgcolor='#ffffff'>暂无记录</td></tr>";
}
?>
</table>
{/dede:datalist}</small> [field:xm/] </h4>
                    <p>[field:content/]</p>
                    <div class="content well margin-bottom-0"> [field:hf/] </div>
                  </div>
                </div>
              </li>