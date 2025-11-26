#include <sun/awt/X11/XBaseMenuWindow$MappingData.h>

#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <sun/awt/X11/XBaseMenuWindow.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <jcpp.h>

using $XMenuItemPeerArray = $Array<::sun::awt::X11::XMenuItemPeer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;
using $XMenuItemPeer = ::sun::awt::X11::XMenuItemPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XBaseMenuWindow$MappingData_FieldInfo_[] = {
	{"items", "[Lsun/awt/X11/XMenuItemPeer;", nullptr, $PRIVATE, $field(XBaseMenuWindow$MappingData, items)},
	{}
};

$MethodInfo _XBaseMenuWindow$MappingData_MethodInfo_[] = {
	{"<init>", "([Lsun/awt/X11/XMenuItemPeer;)V", nullptr, 0, $method(static_cast<void(XBaseMenuWindow$MappingData::*)($XMenuItemPeerArray*)>(&XBaseMenuWindow$MappingData::init$))},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XBaseMenuWindow$MappingData::*)()>(&XBaseMenuWindow$MappingData::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getItems", "()[Lsun/awt/X11/XMenuItemPeer;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XBaseMenuWindow$MappingData_InnerClassesInfo_[] = {
	{"sun.awt.X11.XBaseMenuWindow$MappingData", "sun.awt.X11.XBaseMenuWindow", "MappingData", $STATIC},
	{}
};

$ClassInfo _XBaseMenuWindow$MappingData_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XBaseMenuWindow$MappingData",
	"java.lang.Object",
	"java.lang.Cloneable",
	_XBaseMenuWindow$MappingData_FieldInfo_,
	_XBaseMenuWindow$MappingData_MethodInfo_,
	nullptr,
	nullptr,
	_XBaseMenuWindow$MappingData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XBaseMenuWindow"
};

$Object* allocate$XBaseMenuWindow$MappingData($Class* clazz) {
	return $of($alloc(XBaseMenuWindow$MappingData));
}

void XBaseMenuWindow$MappingData::init$($XMenuItemPeerArray* items) {
	$set(this, items, items);
}

void XBaseMenuWindow$MappingData::init$() {
	$set(this, items, $new($XMenuItemPeerArray, 0));
}

$Object* XBaseMenuWindow$MappingData::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& ex) {
		$throwNew($InternalError, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

$XMenuItemPeerArray* XBaseMenuWindow$MappingData::getItems() {
	return this->items;
}

XBaseMenuWindow$MappingData::XBaseMenuWindow$MappingData() {
}

$Class* XBaseMenuWindow$MappingData::load$($String* name, bool initialize) {
	$loadClass(XBaseMenuWindow$MappingData, name, initialize, &_XBaseMenuWindow$MappingData_ClassInfo_, allocate$XBaseMenuWindow$MappingData);
	return class$;
}

$Class* XBaseMenuWindow$MappingData::class$ = nullptr;

		} // X11
	} // awt
} // sun