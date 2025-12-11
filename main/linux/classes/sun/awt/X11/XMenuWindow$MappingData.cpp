#include <sun/awt/X11/XMenuWindow$MappingData.h>

#include <java/awt/Dimension.h>
#include <java/awt/Rectangle.h>
#include <sun/awt/X11/XBaseMenuWindow$MappingData.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <sun/awt/X11/XMenuWindow.h>
#include <jcpp.h>

using $XMenuItemPeerArray = $Array<::sun::awt::X11::XMenuItemPeer>;
using $Dimension = ::java::awt::Dimension;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseMenuWindow$MappingData = ::sun::awt::X11::XBaseMenuWindow$MappingData;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMenuWindow$MappingData_FieldInfo_[] = {
	{"captionRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(XMenuWindow$MappingData, captionRect)},
	{"desiredSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(XMenuWindow$MappingData, desiredSize)},
	{"leftMarkWidth", "I", nullptr, $PRIVATE, $field(XMenuWindow$MappingData, leftMarkWidth)},
	{"shortcutOrigin", "I", nullptr, $PRIVATE, $field(XMenuWindow$MappingData, shortcutOrigin)},
	{"rightMarkOrigin", "I", nullptr, $PRIVATE, $field(XMenuWindow$MappingData, rightMarkOrigin)},
	{}
};

$MethodInfo _XMenuWindow$MappingData_MethodInfo_[] = {
	{"<init>", "([Lsun/awt/X11/XMenuItemPeer;Ljava/awt/Rectangle;Ljava/awt/Dimension;III)V", nullptr, 0, $method(static_cast<void(XMenuWindow$MappingData::*)($XMenuItemPeerArray*,$Rectangle*,$Dimension*,int32_t,int32_t,int32_t)>(&XMenuWindow$MappingData::init$))},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XMenuWindow$MappingData::*)()>(&XMenuWindow$MappingData::init$))},
	{"getCaptionRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDesiredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getLeftMarkWidth", "()I", nullptr, $PUBLIC},
	{"getRightMarkOrigin", "()I", nullptr, $PUBLIC},
	{"getShortcutOrigin", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMenuWindow$MappingData_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMenuWindow$MappingData", "sun.awt.X11.XMenuWindow", "MappingData", $STATIC},
	{"sun.awt.X11.XBaseMenuWindow$MappingData", "sun.awt.X11.XBaseMenuWindow", "MappingData", $STATIC},
	{}
};

$ClassInfo _XMenuWindow$MappingData_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XMenuWindow$MappingData",
	"sun.awt.X11.XBaseMenuWindow$MappingData",
	nullptr,
	_XMenuWindow$MappingData_FieldInfo_,
	_XMenuWindow$MappingData_MethodInfo_,
	nullptr,
	nullptr,
	_XMenuWindow$MappingData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XMenuWindow"
};

$Object* allocate$XMenuWindow$MappingData($Class* clazz) {
	return $of($alloc(XMenuWindow$MappingData));
}

void XMenuWindow$MappingData::init$($XMenuItemPeerArray* items, $Rectangle* captionRect, $Dimension* desiredSize, int32_t leftMarkWidth, int32_t shortcutOrigin, int32_t rightMarkOrigin) {
	$XBaseMenuWindow$MappingData::init$(items);
	$set(this, captionRect, captionRect);
	$set(this, desiredSize, desiredSize);
	this->leftMarkWidth = leftMarkWidth;
	this->shortcutOrigin = shortcutOrigin;
	this->rightMarkOrigin = rightMarkOrigin;
}

void XMenuWindow$MappingData::init$() {
	$XBaseMenuWindow$MappingData::init$();
	$set(this, desiredSize, $new($Dimension, 0, 0));
	this->leftMarkWidth = 0;
	this->shortcutOrigin = 0;
	this->rightMarkOrigin = 0;
}

$Rectangle* XMenuWindow$MappingData::getCaptionRect() {
	return this->captionRect;
}

$Dimension* XMenuWindow$MappingData::getDesiredSize() {
	return this->desiredSize;
}

int32_t XMenuWindow$MappingData::getShortcutOrigin() {
	return this->shortcutOrigin;
}

int32_t XMenuWindow$MappingData::getLeftMarkWidth() {
	return this->leftMarkWidth;
}

int32_t XMenuWindow$MappingData::getRightMarkOrigin() {
	return this->rightMarkOrigin;
}

XMenuWindow$MappingData::XMenuWindow$MappingData() {
}

$Class* XMenuWindow$MappingData::load$($String* name, bool initialize) {
	$loadClass(XMenuWindow$MappingData, name, initialize, &_XMenuWindow$MappingData_ClassInfo_, allocate$XMenuWindow$MappingData);
	return class$;
}

$Class* XMenuWindow$MappingData::class$ = nullptr;

		} // X11
	} // awt
} // sun