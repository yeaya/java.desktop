#include <sun/awt/X11/XMenuBarPeer$MappingData.h>

#include <sun/awt/X11/XBaseMenuWindow$MappingData.h>
#include <sun/awt/X11/XMenuBarPeer.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <jcpp.h>

using $XMenuItemPeerArray = $Array<::sun::awt::X11::XMenuItemPeer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseMenuWindow$MappingData = ::sun::awt::X11::XBaseMenuWindow$MappingData;
using $XMenuBarPeer = ::sun::awt::X11::XMenuBarPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMenuBarPeer$MappingData_FieldInfo_[] = {
	{"desiredHeight", "I", nullptr, 0, $field(XMenuBarPeer$MappingData, desiredHeight)},
	{}
};

$MethodInfo _XMenuBarPeer$MappingData_MethodInfo_[] = {
	{"<init>", "([Lsun/awt/X11/XMenuItemPeer;I)V", nullptr, 0, $method(static_cast<void(XMenuBarPeer$MappingData::*)($XMenuItemPeerArray*,int32_t)>(&XMenuBarPeer$MappingData::init$))},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XMenuBarPeer$MappingData::*)()>(&XMenuBarPeer$MappingData::init$))},
	{"getDesiredHeight", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMenuBarPeer$MappingData_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMenuBarPeer$MappingData", "sun.awt.X11.XMenuBarPeer", "MappingData", $STATIC},
	{"sun.awt.X11.XBaseMenuWindow$MappingData", "sun.awt.X11.XBaseMenuWindow", "MappingData", $STATIC},
	{}
};

$ClassInfo _XMenuBarPeer$MappingData_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XMenuBarPeer$MappingData",
	"sun.awt.X11.XBaseMenuWindow$MappingData",
	nullptr,
	_XMenuBarPeer$MappingData_FieldInfo_,
	_XMenuBarPeer$MappingData_MethodInfo_,
	nullptr,
	nullptr,
	_XMenuBarPeer$MappingData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XMenuBarPeer"
};

$Object* allocate$XMenuBarPeer$MappingData($Class* clazz) {
	return $of($alloc(XMenuBarPeer$MappingData));
}

void XMenuBarPeer$MappingData::init$($XMenuItemPeerArray* items, int32_t desiredHeight) {
	$XBaseMenuWindow$MappingData::init$(items);
	this->desiredHeight = desiredHeight;
}

void XMenuBarPeer$MappingData::init$() {
	$XBaseMenuWindow$MappingData::init$();
	this->desiredHeight = 0;
}

int32_t XMenuBarPeer$MappingData::getDesiredHeight() {
	return this->desiredHeight;
}

XMenuBarPeer$MappingData::XMenuBarPeer$MappingData() {
}

$Class* XMenuBarPeer$MappingData::load$($String* name, bool initialize) {
	$loadClass(XMenuBarPeer$MappingData, name, initialize, &_XMenuBarPeer$MappingData_ClassInfo_, allocate$XMenuBarPeer$MappingData);
	return class$;
}

$Class* XMenuBarPeer$MappingData::class$ = nullptr;

		} // X11
	} // awt
} // sun