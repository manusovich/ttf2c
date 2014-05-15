




<!DOCTYPE html>
<html class="   ">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    
    
    <title>apue/apue.c at master · oscardelben/apue</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <meta property="fb:app_id" content="1401488693436528"/>

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="oscardelben/apue" name="twitter:title" /><meta content="Code from apue" name="twitter:description" /><meta content="https://avatars3.githubusercontent.com/u/3892?s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars3.githubusercontent.com/u/3892?s=400" property="og:image" /><meta content="oscardelben/apue" property="og:title" /><meta content="https://github.com/oscardelben/apue" property="og:url" /><meta content="Code from apue" property="og:description" />

    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035/">
    <link rel="xhr-socket" href="/_sockets" />

    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="42371D4E:21F1:7D5D9A:53740CDC" name="octolytics-dimension-request_id" /><meta content="2063812" name="octolytics-actor-id" /><meta content="manusovich" name="octolytics-actor-login" /><meta content="040b8debd654a1bb872589d975275f4daa55adc3ab6bacf46e0c03d11fc9d774" name="octolytics-actor-hash" />
    

    
    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="3OfbjyE/JkDK+vCc+FlEb9doSGPb7FjVVPDMfo1ITm7oyxnPNTwK7DgfIWgo0XcpqowW5aNeNQPds6PjM9NzGQ==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-08eca722f10c5a963656d215e35a809b85c86d1e.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://assets-cdn.github.com/assets/github2-50bd4d5d683bdda80f061b5d079826bd642a2787.css" media="all" rel="stylesheet" type="text/css" />
    


    <meta http-equiv="x-pjax-version" content="8f882ae42120fd172a3d81adab0f2690">

      
  <meta name="description" content="Code from apue" />

  <meta content="3892" name="octolytics-dimension-user_id" /><meta content="oscardelben" name="octolytics-dimension-user_login" /><meta content="4496703" name="octolytics-dimension-repository_id" /><meta content="oscardelben/apue" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="4496703" name="octolytics-dimension-repository_network_root_id" /><meta content="oscardelben/apue" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/oscardelben/apue/commits/master.atom" rel="alternate" title="Recent Commits to apue:master" type="application/atom+xml" />

  </head>


  <body class="logged_in  env-production macintosh vis-public page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      
      


      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    
    <a href="/notifications" aria-label="You have no unread notifications" class="notification-indicator tooltipped tooltipped-s" data-hotkey="g n">
        <span class="mail-status all-read"></span>
</a>

      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<div class="commandbar">
  <span class="message"></span>
  <input type="text" data-hotkey="s, /" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    data-username="manusovich"
      data-repo="oscardelben/apue"
      data-branch="master"
      data-sha="328771221ebc951ce03ebf89140f1ca5d8ea6cc9"
  >
  <div class="display hidden"></div>
</div>

    <input type="hidden" name="nwo" value="oscardelben/apue" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target" role="button" aria-haspopup="true">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container" aria-hidden="true">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="help tooltipped tooltipped-s" aria-label="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
        <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="https://help.github.com">Help</a></li>
        </ul>
      </div>

    


  <ul id="user-links">
    <li>
      <a href="/manusovich" class="name">
        <img alt="manusovich" class=" js-avatar" data-user="2063812" height="20" src="https://avatars2.githubusercontent.com/u/2063812?s=140" width="20" /> manusovich
      </a>
    </li>

    <li class="new-menu dropdown-toggle js-menu-container">
      <a href="#" class="js-menu-target tooltipped tooltipped-s" aria-label="Create new...">
        <span class="octicon octicon-plus"></span>
        <span class="dropdown-arrow"></span>
      </a>

      <div class="new-menu-content js-menu-content">
      </div>
    </li>

    <li>
      <a href="/settings/profile" id="account_settings"
        class="tooltipped tooltipped-s"
        aria-label="Account settings ">
        <span class="octicon octicon-tools"></span>
      </a>
    </li>
    <li>
      <form class="logout-form" action="/logout" method="post">
        <button class="sign-out-button tooltipped tooltipped-s" aria-label="Sign out">
          <span class="octicon octicon-log-out"></span>
        </button>
      </form>
    </li>

  </ul>

<div class="js-new-dropdown-contents hidden">
  

<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo-create"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-organization"></span> New organization</a>
  </li>


    <li class="section-title">
      <span title="oscardelben/apue">This repository</span>
    </li>
      <li>
        <a href="/oscardelben/apue/issues/new"><span class="octicon octicon-issue-opened"></span> New issue</a>
      </li>
</ul>

</div>


    
  </div>
</div>

      

        



      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="5f9wN+IVG5+0ZRFUrZC8P61cmmR+0AVUElSp+qsjQhUId5FOj+Yu6bujOtV98lj4iasDyeBTYwXbl8sAPH+RIA==" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="4496703" />

    <div class="select-menu js-menu-container js-select-menu">
      <a class="social-count js-social-count" href="/oscardelben/apue/watchers">
        1
      </a>
      <span class="minibutton select-menu-button with-count js-menu-target" role="button" tabindex="0" aria-haspopup="true">
        <span class="js-select-button">
          <span class="octicon octicon-eye-watch"></span>
          Watch
        </span>
      </span>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container" role="menu">

            <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for conversations in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-watch"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for conversations in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

  <li>
  

  <div class="js-toggler-container js-social-container starring-container ">

    <form accept-charset="UTF-8" action="/oscardelben/apue/unstar" class="js-toggler-form starred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="KLnEwD5RybFJeV0U/EVQf429lcaBJI1VKldXJGrrEPv2BbBswShpiwCl2vzWPfn4m3cpywsR7nkWfND0PWSWhw==" /></div>
      <button
        class="minibutton with-count js-toggler-target star-button"
        aria-label="Unstar this repository" title="Unstar oscardelben/apue">
        <span class="octicon octicon-star-delete"></span><span class="text">Unstar</span>
      </button>
        <a class="social-count js-social-count" href="/oscardelben/apue/stargazers">
          2
        </a>
</form>
    <form accept-charset="UTF-8" action="/oscardelben/apue/star" class="js-toggler-form unstarred" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="j2W7w7tAQBc3UOsGKikquWEf7k1l1RVyVdTez+2MgfsynV/Mz9LOogcvSdLbDkYRiVRksXZVbb8BS9Ma1x4Qqg==" /></div>
      <button
        class="minibutton with-count js-toggler-target star-button"
        aria-label="Star this repository" title="Star oscardelben/apue">
        <span class="octicon octicon-star"></span><span class="text">Star</span>
      </button>
        <a class="social-count js-social-count" href="/oscardelben/apue/stargazers">
          2
        </a>
</form>  </div>

  </li>


        <li>
          <a href="/oscardelben/apue/fork" class="minibutton with-count js-toggler-target fork-button lighter tooltipped-n" title="Fork your own copy of oscardelben/apue to your account" aria-label="Fork your own copy of oscardelben/apue to your account" rel="nofollow" data-method="post">
            <span class="octicon octicon-git-branch-create"></span><span class="text">Fork</span>
          </a>
          <a href="/oscardelben/apue/network" class="social-count">1</a>
        </li>


</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo"></span>
          <span class="author"><a href="/oscardelben" class="url fn" itemprop="url" rel="author"><span itemprop="title">oscardelben</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/oscardelben/apue" class="js-current-repository js-repo-home-link">apue</a></strong>

          <span class="page-context-loader">
            <img alt="Octocat-spinner-32" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline js-new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped tooltipped-w" aria-label="Code">
        <a href="/oscardelben/apue" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /oscardelben/apue">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

        <li class="tooltipped tooltipped-w" aria-label="Issues">
          <a href="/oscardelben/apue/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g i" data-selected-links="repo_issues /oscardelben/apue/issues">
            <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>

      <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
        <a href="/oscardelben/apue/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g p" data-selected-links="repo_pulls /oscardelben/apue/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


        <li class="tooltipped tooltipped-w" aria-label="Wiki">
          <a href="/oscardelben/apue/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g w" data-selected-links="repo_wiki /oscardelben/apue/wiki">
            <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>
    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped tooltipped-w" aria-label="Pulse">
        <a href="/oscardelben/apue/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /oscardelben/apue/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Graphs">
        <a href="/oscardelben/apue/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /oscardelben/apue/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Network">
        <a href="/oscardelben/apue/network" aria-label="Network" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-selected-links="repo_network /oscardelben/apue/network">
          <span class="octicon octicon-git-branch"></span> <span class="full-word">Network</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


  </div>
</div>

              <div class="only-with-full-nav">
                

  

<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/oscardelben/apue.git" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/oscardelben/apue.git" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=clone">
  <h3><strong>SSH</strong> clone URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="git@github.com:oscardelben/apue.git" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="git@github.com:oscardelben/apue.git" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="clone-url-box">
    <input type="text" class="clone js-url-field"
           value="https://github.com/oscardelben/apue" readonly="readonly">
    <span class="url-box-clippy">
    <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/oscardelben/apue" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
      <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>,
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <span class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <a href="https://help.github.com/articles/which-remote-url-should-i-use">
    <span class="octicon octicon-question"></span>
    </a>
  </span>
</p>

  <a href="http://mac.github.com" data-url="github-mac://openRepo/https://github.com/oscardelben/apue" class="minibutton sidebar-button js-conduit-rewrite-url" title="Save oscardelben/apue to your computer and use it in GitHub Desktop." aria-label="Save oscardelben/apue to your computer and use it in GitHub Desktop.">
    <span class="octicon octicon-device-desktop"></span>
    Clone in Desktop
  </a>


                <a href="/oscardelben/apue/archive/master.zip"
                   class="minibutton sidebar-button"
                   aria-label="Download oscardelben/apue as a zip file"
                   title="Download oscardelben/apue as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<a href="/oscardelben/apue/blob/797eec6084607775c9afcb58becb856edad373eb/apue.c" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:cfaa4e6a270ab4697c6b799a069e81aa -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/oscardelben/apue/find/master" data-pjax data-hotkey="t" class="js-show-file-finder" style="display:none">Show File Finder</a>

<div class="file-navigation">
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-remove-close js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/oscardelben/apue/blob/master/apue.c"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/oscardelben/apue" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">apue</span></a></span></span><span class="separator"> / </span><strong class="final-path">apue.c</strong> <button aria-label="copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="apue.c" data-copied-hint="copied!" type="button"><span class="octicon octicon-clippy"></span></button>
  </div>
</div>


  <div class="commit file-history-tease">
      <img alt="Oscar Del Ben" class="main-avatar js-avatar" data-user="3892" height="24" src="https://avatars0.githubusercontent.com/u/3892?s=140" width="24" />
      <span class="author"><a href="/oscardelben" rel="author">oscardelben</a></span>
      <time class="js-relative-date" data-title-format="YYYY-MM-DD HH:mm:ss" datetime="2012-05-30T08:46:37-07:00" title="2012-05-30 10:46:37">May 30, 2012</time>
      <div class="commit-title">
          <a href="/oscardelben/apue/commit/c811ced83ca5e635670d60069ed954b719cf2c0b" class="message" data-pjax="true" title="First commit">First commit</a>
      </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong>  contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img alt="Oscar Del Ben" class=" js-avatar" data-user="3892" height="24" src="https://avatars0.githubusercontent.com/u/3892?s=140" width="24" />
            <a href="/oscardelben">oscardelben</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
        <span class="meta-divider"></span>
          <span>85 lines (71 sloc)</span>
          <span class="meta-divider"></span>
        <span>1.354 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
            <a class="minibutton tooltipped tooltipped-w js-conduit-openfile-check"
               href="http://mac.github.com"
               data-url="github-mac://openRepo/https://github.com/oscardelben/apue?branch=master&amp;filepath=apue.c"
               aria-label="Open this file in GitHub for Mac"
               data-failed-title="Your version of GitHub for Mac is too old to open this file. Try checking for updates.">
                <span class="octicon octicon-device-desktop"></span> Open
            </a>
                <a class="minibutton tooltipped tooltipped-n js-update-url-with-hash"
                   aria-label="Clicking this button will automatically fork this project so you can edit the file"
                   href="/oscardelben/apue/edit/master/apue.c"
                   data-method="post" rel="nofollow">Edit</a>
          <a href="/oscardelben/apue/raw/master/apue.c" class="button minibutton " id="raw-url">Raw</a>
            <a href="/oscardelben/apue/blame/master/apue.c" class="button minibutton js-update-url-with-hash">Blame</a>
          <a href="/oscardelben/apue/commits/master/apue.c" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->

            <a class="minibutton danger empty-icon tooltipped tooltipped-s"
               href="/oscardelben/apue/delete/master/apue.c"
               aria-label="Fork this project and delete file"
               data-method="post" data-test-id="delete-blob-file" rel="nofollow">

          Delete
        </a>
      </div><!-- /.actions -->
    </div>
        <div class="blob-wrapper data type-c js-blob-data">
        <table class="file-code file-diff tab-size-8">
          <tr class="file-code-line">
            <td class="blob-line-nums">
              <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>

            </td>
            <td class="blob-line-code"><div class="code-body highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * =====================================================================================</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> *       Filename:  apue.c</span></div><div class='line' id='LC5'><span class="cm"> *</span></div><div class='line' id='LC6'><span class="cm"> *    Description:  </span></div><div class='line' id='LC7'><span class="cm"> *</span></div><div class='line' id='LC8'><span class="cm"> *        Version:  1.0</span></div><div class='line' id='LC9'><span class="cm"> *        Created:  2009/06/23 16时31分19秒</span></div><div class='line' id='LC10'><span class="cm"> *       Revision:  none</span></div><div class='line' id='LC11'><span class="cm"> *       Compiler:  gcc</span></div><div class='line' id='LC12'><span class="cm"> *</span></div><div class='line' id='LC13'><span class="cm"> *         Author:  jack.zh(toserver@gmail.com) </span></div><div class='line' id='LC14'><span class="cm"> *        Company:  </span></div><div class='line' id='LC15'><span class="cm"> *</span></div><div class='line' id='LC16'><span class="cm"> * =====================================================================================</span></div><div class='line' id='LC17'><span class="cm"> */</span></div><div class='line' id='LC18'><br/></div><div class='line' id='LC19'><span class="cp">#include &quot;apue.h&quot;</span></div><div class='line' id='LC20'><span class="cp">#include &lt;errno.h&gt;</span></div><div class='line' id='LC21'><span class="cp">#include &lt;stdarg.h&gt;</span></div><div class='line' id='LC22'><br/></div><div class='line' id='LC23'><span class="k">static</span> <span class="kt">void</span> <span class="nf">err_doit</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="p">,</span> <span class="kt">va_list</span><span class="p">);</span></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><span class="kt">void</span> <span class="nf">err_quit</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">fmt</span><span class="p">,</span> <span class="p">...)</span></div><div class='line' id='LC26'><span class="p">{</span></div><div class='line' id='LC27'>	<span class="kt">va_list</span> <span class="n">ap</span><span class="p">;</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'>	<span class="n">va_start</span><span class="p">(</span><span class="n">ap</span><span class="p">,</span> <span class="n">fmt</span><span class="p">);</span></div><div class='line' id='LC30'>	<span class="n">err_doit</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">fmt</span><span class="p">,</span> <span class="n">ap</span><span class="p">);</span></div><div class='line' id='LC31'>	<span class="n">va_end</span><span class="p">(</span><span class="n">ap</span><span class="p">);</span></div><div class='line' id='LC32'>	<span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC33'><span class="p">}</span></div><div class='line' id='LC34'><br/></div><div class='line' id='LC35'><span class="kt">void</span> <span class="nf">err_sys</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">fmt</span><span class="p">,</span> <span class="p">...)</span></div><div class='line' id='LC36'><span class="p">{</span></div><div class='line' id='LC37'>	<span class="kt">va_list</span> <span class="n">ap</span><span class="p">;</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'>	<span class="n">va_start</span><span class="p">(</span><span class="n">ap</span><span class="p">,</span> <span class="n">fmt</span><span class="p">);</span></div><div class='line' id='LC40'>	<span class="n">err_doit</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="n">fmt</span><span class="p">,</span> <span class="n">ap</span><span class="p">);</span></div><div class='line' id='LC41'>	<span class="n">va_end</span><span class="p">(</span><span class="n">ap</span><span class="p">);</span></div><div class='line' id='LC42'>	<span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC43'><span class="p">}</span></div><div class='line' id='LC44'><br/></div><div class='line' id='LC45'><span class="kt">void</span> <span class="nf">err_msg</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">fmt</span><span class="p">,</span> <span class="p">...)</span></div><div class='line' id='LC46'><span class="p">{</span></div><div class='line' id='LC47'>	<span class="kt">va_list</span> <span class="n">ap</span><span class="p">;</span></div><div class='line' id='LC48'><br/></div><div class='line' id='LC49'>	<span class="n">va_start</span><span class="p">(</span><span class="n">ap</span><span class="p">,</span> <span class="n">fmt</span><span class="p">);</span></div><div class='line' id='LC50'>	<span class="n">err_doit</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="n">fmt</span><span class="p">,</span> <span class="n">ap</span><span class="p">);</span></div><div class='line' id='LC51'>	<span class="n">va_end</span><span class="p">(</span><span class="n">ap</span><span class="p">);</span></div><div class='line' id='LC52'><span class="p">}</span></div><div class='line' id='LC53'><br/></div><div class='line' id='LC54'><span class="kt">void</span> <span class="nf">err_ret</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">fmt</span><span class="p">,</span> <span class="p">...)</span></div><div class='line' id='LC55'><span class="p">{</span></div><div class='line' id='LC56'>	<span class="kt">va_list</span> <span class="n">ap</span><span class="p">;</span></div><div class='line' id='LC57'><br/></div><div class='line' id='LC58'>	<span class="n">va_start</span><span class="p">(</span><span class="n">ap</span><span class="p">,</span> <span class="n">fmt</span><span class="p">);</span></div><div class='line' id='LC59'>	<span class="n">err_doit</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="n">fmt</span><span class="p">,</span> <span class="n">ap</span><span class="p">);</span></div><div class='line' id='LC60'>	<span class="n">va_end</span><span class="p">(</span><span class="n">ap</span><span class="p">);</span></div><div class='line' id='LC61'><span class="p">}</span></div><div class='line' id='LC62'><br/></div><div class='line' id='LC63'><span class="k">static</span></div><div class='line' id='LC64'><span class="kt">void</span></div><div class='line' id='LC65'><span class="nf">err_doit</span><span class="p">(</span></div><div class='line' id='LC66'>		<span class="kt">int</span> <span class="n">errnoflag</span><span class="p">,</span></div><div class='line' id='LC67'>		<span class="kt">int</span> <span class="n">error</span><span class="p">,</span></div><div class='line' id='LC68'>		<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">fmt</span><span class="p">,</span></div><div class='line' id='LC69'>		<span class="kt">va_list</span> <span class="n">ap</span></div><div class='line' id='LC70'>		<span class="p">)</span></div><div class='line' id='LC71'><span class="p">{</span></div><div class='line' id='LC72'>	<span class="kt">char</span> <span class="n">buf</span><span class="p">[</span><span class="n">MAXLINE</span><span class="p">];</span></div><div class='line' id='LC73'>	<span class="n">vsnprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="n">MAXLINE</span><span class="p">,</span> <span class="n">fmt</span><span class="p">,</span> <span class="n">ap</span><span class="p">);</span></div><div class='line' id='LC74'><br/></div><div class='line' id='LC75'>	<span class="k">if</span> <span class="p">(</span><span class="n">errnoflag</span><span class="p">)</span></div><div class='line' id='LC76'>	<span class="p">{</span></div><div class='line' id='LC77'>		<span class="n">snprintf</span><span class="p">(</span><span class="n">buf</span><span class="o">+</span><span class="n">strlen</span><span class="p">(</span><span class="n">buf</span><span class="p">),</span> <span class="n">MAXLINE</span><span class="o">-</span><span class="n">strlen</span><span class="p">(</span><span class="n">buf</span><span class="p">),</span> <span class="s">&quot;: %s&quot;</span><span class="p">,</span> <span class="n">strerror</span><span class="p">(</span><span class="n">error</span><span class="p">));</span></div><div class='line' id='LC78'>	<span class="p">}</span></div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'>	<span class="n">strcat</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC81'>	<span class="n">fflush</span><span class="p">(</span><span class="n">stdout</span><span class="p">);</span></div><div class='line' id='LC82'>	<span class="n">fputs</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="n">stderr</span><span class="p">);</span></div><div class='line' id='LC83'>	<span class="n">fflush</span><span class="p">(</span><span class="nb">NULL</span><span class="p">);</span></div><div class='line' id='LC84'><span class="p">}</span></div></pre></div></td>
          </tr>
        </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2014 <span title="0.04619s from github-fe133-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close js-ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-5a921ce2c45d4a5235b8f9c5c716611df0a83a79.js" type="text/javascript"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-71380a7260f8593a61c90ab35f6f6cf70e28aaba.js" type="text/javascript"></script>
      
      
  </body>
</html>

