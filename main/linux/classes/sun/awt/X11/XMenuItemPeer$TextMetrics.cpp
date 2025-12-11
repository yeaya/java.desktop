#include <sun/awt/X11/XMenuItemPeer$TextMetrics.h>

#include <java/awt/Dimension.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <sun/awt/X11/XMenuItemPeer.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMenuItemPeer$TextMetrics_FieldInfo_[] = {
	{"textDimension", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(XMenuItemPeer$TextMetrics, textDimension)},
	{"shortcutWidth", "I", nullptr, $PRIVATE, $field(XMenuItemPeer$TextMetrics, shortcutWidth)},
	{"textBaseline", "I", nullptr, $PRIVATE, $field(XMenuItemPeer$TextMetrics, textBaseline)},
	{}
};

$MethodInfo _XMenuItemPeer$TextMetrics_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Dimension;II)V", nullptr, 0, $method(static_cast<void(XMenuItemPeer$TextMetrics::*)($Dimension*,int32_t,int32_t)>(&XMenuItemPeer$TextMetrics::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getShortcutWidth", "()I", nullptr, 0},
	{"getTextBaseline", "()I", nullptr, 0},
	{"getTextDimension", "()Ljava/awt/Dimension;", nullptr, 0},
	{}
};

$InnerClassInfo _XMenuItemPeer$TextMetrics_InnerClassesInfo_[] = {
	{"sun.awt.X11.XMenuItemPeer$TextMetrics", "sun.awt.X11.XMenuItemPeer", "TextMetrics", $STATIC},
	{}
};

$ClassInfo _XMenuItemPeer$TextMetrics_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XMenuItemPeer$TextMetrics",
	"java.lang.Object",
	"java.lang.Cloneable",
	_XMenuItemPeer$TextMetrics_FieldInfo_,
	_XMenuItemPeer$TextMetrics_MethodInfo_,
	nullptr,
	nullptr,
	_XMenuItemPeer$TextMetrics_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XMenuItemPeer"
};

$Object* allocate$XMenuItemPeer$TextMetrics($Class* clazz) {
	return $of($alloc(XMenuItemPeer$TextMetrics));
}

void XMenuItemPeer$TextMetrics::init$($Dimension* textDimension, int32_t shortcutWidth, int32_t textBaseline) {
	$set(this, textDimension, textDimension);
	this->shortcutWidth = shortcutWidth;
	this->textBaseline = textBaseline;
}

$Object* XMenuItemPeer$TextMetrics::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& ex) {
		$throwNew($InternalError, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

$Dimension* XMenuItemPeer$TextMetrics::getTextDimension() {
	return this->textDimension;
}

int32_t XMenuItemPeer$TextMetrics::getShortcutWidth() {
	return this->shortcutWidth;
}

int32_t XMenuItemPeer$TextMetrics::getTextBaseline() {
	return this->textBaseline;
}

XMenuItemPeer$TextMetrics::XMenuItemPeer$TextMetrics() {
}

$Class* XMenuItemPeer$TextMetrics::load$($String* name, bool initialize) {
	$loadClass(XMenuItemPeer$TextMetrics, name, initialize, &_XMenuItemPeer$TextMetrics_ClassInfo_, allocate$XMenuItemPeer$TextMetrics);
	return class$;
}

$Class* XMenuItemPeer$TextMetrics::class$ = nullptr;

		} // X11
	} // awt
} // sun