<li class="dropdown margin-left-0"> <a data-toggle="dropdown" data-hover="dropdown" aria-expanded="false" class="dropdown-toggle link" href="{dede:field name='typeurl'/}" class="link">{dede:field name='typename'/}<i class="fa fa-caret-down"></i> </a>
          <ul class="dropdown-menu dropdown-menu-right maxNavlist">
            {dede:channel type='son' noself='yes'}
            <li><a href="[field:typelink/]" class=" nav2list"  title="[field:typename/]">[field:typename/]</a></li>
			{/dede:channel}
          </ul>
        </li>