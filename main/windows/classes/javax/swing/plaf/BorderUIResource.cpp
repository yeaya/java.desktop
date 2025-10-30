#include <javax/swing/plaf/BorderUIResource.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EtchedBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/BorderUIResource$BevelBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource$EtchedBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <jcpp.h>

#undef LOWERED
#undef RAISED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $EtchedBorder = ::javax::swing::border::EtchedBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $BorderUIResource$BevelBorderUIResource = ::javax::swing::plaf::BorderUIResource$BevelBorderUIResource;
using $BorderUIResource$EtchedBorderUIResource = ::javax::swing::plaf::BorderUIResource$EtchedBorderUIResource;
using $BorderUIResource$LineBorderUIResource = ::javax::swing::plaf::BorderUIResource$LineBorderUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {

$FieldInfo _BorderUIResource_FieldInfo_[] = {
	{"etched", "Ljavax/swing/border/Border;", nullptr, $STATIC, $staticField(BorderUIResource, etched)},
	{"loweredBevel", "Ljavax/swing/border/Border;", nullptr, $STATIC, $staticField(BorderUIResource, loweredBevel)},
	{"raisedBevel", "Ljavax/swing/border/Border;", nullptr, $STATIC, $staticField(BorderUIResource, raisedBevel)},
	{"blackLine", "Ljavax/swing/border/Border;", nullptr, $STATIC, $staticField(BorderUIResource, blackLine)},
	{"delegate", "Ljavax/swing/border/Border;", nullptr, $PRIVATE, $field(BorderUIResource, delegate)},
	{}
};

$MethodInfo _BorderUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource::*)($Border*)>(&BorderUIResource::init$))},
	{"getBlackLineBorderUIResource", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BorderUIResource::getBlackLineBorderUIResource))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getEtchedBorderUIResource", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BorderUIResource::getEtchedBorderUIResource))},
	{"getLoweredBevelBorderUIResource", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BorderUIResource::getLoweredBevelBorderUIResource))},
	{"getRaisedBevelBorderUIResource", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&BorderUIResource::getRaisedBevelBorderUIResource))},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BorderUIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.BorderUIResource$TitledBorderUIResource", "javax.swing.plaf.BorderUIResource", "TitledBorderUIResource", $PUBLIC | $STATIC},
	{"javax.swing.plaf.BorderUIResource$MatteBorderUIResource", "javax.swing.plaf.BorderUIResource", "MatteBorderUIResource", $PUBLIC | $STATIC},
	{"javax.swing.plaf.BorderUIResource$EtchedBorderUIResource", "javax.swing.plaf.BorderUIResource", "EtchedBorderUIResource", $PUBLIC | $STATIC},
	{"javax.swing.plaf.BorderUIResource$BevelBorderUIResource", "javax.swing.plaf.BorderUIResource", "BevelBorderUIResource", $PUBLIC | $STATIC},
	{"javax.swing.plaf.BorderUIResource$LineBorderUIResource", "javax.swing.plaf.BorderUIResource", "LineBorderUIResource", $PUBLIC | $STATIC},
	{"javax.swing.plaf.BorderUIResource$EmptyBorderUIResource", "javax.swing.plaf.BorderUIResource", "EmptyBorderUIResource", $PUBLIC | $STATIC},
	{"javax.swing.plaf.BorderUIResource$CompoundBorderUIResource", "javax.swing.plaf.BorderUIResource", "CompoundBorderUIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BorderUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.BorderUIResource",
	"java.lang.Object",
	"javax.swing.border.Border,javax.swing.plaf.UIResource,java.io.Serializable",
	_BorderUIResource_FieldInfo_,
	_BorderUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BorderUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.BorderUIResource$TitledBorderUIResource,javax.swing.plaf.BorderUIResource$MatteBorderUIResource,javax.swing.plaf.BorderUIResource$EtchedBorderUIResource,javax.swing.plaf.BorderUIResource$BevelBorderUIResource,javax.swing.plaf.BorderUIResource$LineBorderUIResource,javax.swing.plaf.BorderUIResource$EmptyBorderUIResource,javax.swing.plaf.BorderUIResource$CompoundBorderUIResource"
};

$Object* allocate$BorderUIResource($Class* clazz) {
	return $of($alloc(BorderUIResource));
}

int32_t BorderUIResource::hashCode() {
	 return this->$Border::hashCode();
}

bool BorderUIResource::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* BorderUIResource::clone() {
	 return this->$Border::clone();
}

$String* BorderUIResource::toString() {
	 return this->$Border::toString();
}

void BorderUIResource::finalize() {
	this->$Border::finalize();
}

$Border* BorderUIResource::etched = nullptr;
$Border* BorderUIResource::loweredBevel = nullptr;
$Border* BorderUIResource::raisedBevel = nullptr;
$Border* BorderUIResource::blackLine = nullptr;

$Border* BorderUIResource::getEtchedBorderUIResource() {
	$init(BorderUIResource);
	if (BorderUIResource::etched == nullptr) {
		$assignStatic(BorderUIResource::etched, $new($BorderUIResource$EtchedBorderUIResource));
	}
	return BorderUIResource::etched;
}

$Border* BorderUIResource::getLoweredBevelBorderUIResource() {
	$init(BorderUIResource);
	if (BorderUIResource::loweredBevel == nullptr) {
		$assignStatic(BorderUIResource::loweredBevel, $new($BorderUIResource$BevelBorderUIResource, $BevelBorder::LOWERED));
	}
	return BorderUIResource::loweredBevel;
}

$Border* BorderUIResource::getRaisedBevelBorderUIResource() {
	$init(BorderUIResource);
	if (BorderUIResource::raisedBevel == nullptr) {
		$assignStatic(BorderUIResource::raisedBevel, $new($BorderUIResource$BevelBorderUIResource, $BevelBorder::RAISED));
	}
	return BorderUIResource::raisedBevel;
}

$Border* BorderUIResource::getBlackLineBorderUIResource() {
	$init(BorderUIResource);
	if (BorderUIResource::blackLine == nullptr) {
		$init($Color);
		$assignStatic(BorderUIResource::blackLine, $new($BorderUIResource$LineBorderUIResource, $Color::black));
	}
	return BorderUIResource::blackLine;
}

void BorderUIResource::init$($Border* delegate) {
	if (delegate == nullptr) {
		$throwNew($IllegalArgumentException, "null border delegate argument"_s);
	}
	$set(this, delegate, delegate);
}

void BorderUIResource::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->delegate)->paintBorder(c, g, x, y, width, height);
}

$Insets* BorderUIResource::getBorderInsets($Component* c) {
	return $nc(this->delegate)->getBorderInsets(c);
}

bool BorderUIResource::isBorderOpaque() {
	return $nc(this->delegate)->isBorderOpaque();
}

BorderUIResource::BorderUIResource() {
}

$Class* BorderUIResource::load$($String* name, bool initialize) {
	$loadClass(BorderUIResource, name, initialize, &_BorderUIResource_ClassInfo_, allocate$BorderUIResource);
	return class$;
}

$Class* BorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax