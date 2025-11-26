#include <sun/awt/X11/XDesktopPeer.h>

#include <java/awt/Desktop$Action.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <sun/awt/UNIXToolkit$GtkVersions.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

#undef BROWSE
#undef MAIL
#undef OPEN

using $Desktop$ActionArray = $Array<::java::awt::Desktop$Action>;
using $Desktop$Action = ::java::awt::Desktop$Action;
using $DesktopPeer = ::java::awt::peer::DesktopPeer;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $UNIXToolkit$GtkVersions = ::sun::awt::UNIXToolkit$GtkVersions;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDesktopPeer_FieldInfo_[] = {
	{"supportedActions", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Desktop$Action;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XDesktopPeer, supportedActions)},
	{"nativeLibraryLoaded", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XDesktopPeer, nativeLibraryLoaded)},
	{"initExecuted", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XDesktopPeer, initExecuted)},
	{}
};

$MethodInfo _XDesktopPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XDesktopPeer::*)()>(&XDesktopPeer::init$))},
	{"browse", "(Ljava/net/URI;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"edit", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"gnome_url_show", "([B)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(XDesktopPeer::*)($bytes*)>(&XDesktopPeer::gnome_url_show))},
	{"init", "(IZ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int32_t,bool)>(&XDesktopPeer::init))},
	{"initWithLock", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&XDesktopPeer::initWithLock))},
	{"isDesktopSupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XDesktopPeer::isDesktopSupported))},
	{"isSupported", "(Ljava/awt/Desktop$Action;)Z", nullptr, $PUBLIC},
	{"launch", "(Ljava/net/URI;)V", nullptr, $PRIVATE, $method(static_cast<void(XDesktopPeer::*)($URI*)>(&XDesktopPeer::launch)), "java.io.IOException"},
	{"mail", "(Ljava/net/URI;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"open", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"print", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_gnome_url_show 3
#define _METHOD_INDEX_init 4

$ClassInfo _XDesktopPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XDesktopPeer",
	"java.lang.Object",
	"java.awt.peer.DesktopPeer",
	_XDesktopPeer_FieldInfo_,
	_XDesktopPeer_MethodInfo_
};

$Object* allocate$XDesktopPeer($Class* clazz) {
	return $of($alloc(XDesktopPeer));
}

$List* XDesktopPeer::supportedActions = nullptr;
bool XDesktopPeer::nativeLibraryLoaded = false;
bool XDesktopPeer::initExecuted = false;

void XDesktopPeer::initWithLock() {
	$init(XDesktopPeer);
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!XDesktopPeer::initExecuted) {
				int32_t var$1 = $nc($($UNIXToolkit::getEnabledGtkVersion()))->getNumber();
				XDesktopPeer::nativeLibraryLoaded = init(var$1, $UNIXToolkit::isGtkVerbose());
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			XDesktopPeer::initExecuted = true;
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDesktopPeer::init$() {
	initWithLock();
}

bool XDesktopPeer::isDesktopSupported() {
	$init(XDesktopPeer);
	initWithLock();
	return XDesktopPeer::nativeLibraryLoaded && !$nc(XDesktopPeer::supportedActions)->isEmpty();
}

bool XDesktopPeer::isSupported($Desktop$Action* type) {
	return $nc(XDesktopPeer::supportedActions)->contains(type);
}

void XDesktopPeer::open($File* file) {
	$useLocalCurrentObjectStackCache();
	try {
		launch($($nc(file)->toURI()));
	} catch ($MalformedURLException& e) {
		$throwNew($IOException, $($nc(file)->toString()));
	}
}

void XDesktopPeer::edit($File* file) {
	$throwNew($UnsupportedOperationException, "The current platform doesn\'t support the EDIT action."_s);
}

void XDesktopPeer::print($File* file) {
	$throwNew($UnsupportedOperationException, "The current platform doesn\'t support the PRINT action."_s);
}

void XDesktopPeer::mail($URI* uri) {
	launch(uri);
}

void XDesktopPeer::browse($URI* uri) {
	launch(uri);
}

void XDesktopPeer::launch($URI* uri) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, uriByteArray, $nc(($$str({$($nc(uri)->toString()), $$str(u'\0')})))->getBytes());
	bool result = false;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!XDesktopPeer::nativeLibraryLoaded) {
				$throwNew($IOException, "Failed to load native libraries."_s);
			}
			result = gnome_url_show(uriByteArray);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (!result) {
		$throwNew($IOException, $$str({"Failed to show URI:"_s, uri}));
	}
}

bool XDesktopPeer::gnome_url_show($bytes* url) {
	bool $ret = false;
	$prepareNative(XDesktopPeer, gnome_url_show, bool, $bytes* url);
	$ret = $invokeNative(XDesktopPeer, gnome_url_show, url);
	$finishNative();
	return $ret;
}

bool XDesktopPeer::init(int32_t gtkVersion, bool verbose) {
	$init(XDesktopPeer);
	bool $ret = false;
	$prepareNativeStatic(XDesktopPeer, init, bool, int32_t gtkVersion, bool verbose);
	$ret = $invokeNativeStatic(XDesktopPeer, init, gtkVersion, verbose);
	$finishNativeStatic();
	return $ret;
}

void clinit$XDesktopPeer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Desktop$Action);
	$assignStatic(XDesktopPeer::supportedActions, $new($ArrayList, $(static_cast<$Collection*>($Arrays::asList($$new($Desktop$ActionArray, {
		$Desktop$Action::OPEN,
		$Desktop$Action::MAIL,
		$Desktop$Action::BROWSE
	}))))));
	XDesktopPeer::nativeLibraryLoaded = false;
	XDesktopPeer::initExecuted = false;
}

XDesktopPeer::XDesktopPeer() {
}

$Class* XDesktopPeer::load$($String* name, bool initialize) {
	$loadClass(XDesktopPeer, name, initialize, &_XDesktopPeer_ClassInfo_, clinit$XDesktopPeer, allocate$XDesktopPeer);
	return class$;
}

$Class* XDesktopPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun