#include <com/apple/laf/AquaTextFieldSearch$SearchFieldBorder.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaTextFieldBorder.h>
#include <com/apple/laf/AquaTextFieldSearch$SearchFieldBorder$1.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef FRAME_TEXT_FIELD_ROUND

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaTextFieldBorder = ::com::apple::laf::AquaTextFieldBorder;
using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $AquaTextFieldSearch$SearchFieldBorder$1 = ::com::apple::laf::AquaTextFieldSearch$SearchFieldBorder$1;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextFieldSearch$SearchFieldBorder_FieldInfo_[] = {
	{"reallyPaintBorder", "Z", nullptr, $PROTECTED, $field(AquaTextFieldSearch$SearchFieldBorder, reallyPaintBorder)},
	{"doingLayout", "Z", nullptr, $PROTECTED, $field(AquaTextFieldSearch$SearchFieldBorder, doingLayout)},
	{}
};

$MethodInfo _AquaTextFieldSearch$SearchFieldBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextFieldSearch$SearchFieldBorder::*)()>(&AquaTextFieldSearch$SearchFieldBorder::init$))},
	{"<init>", "(Lcom/apple/laf/AquaTextFieldSearch$SearchFieldBorder;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextFieldSearch$SearchFieldBorder::*)(AquaTextFieldSearch$SearchFieldBorder*)>(&AquaTextFieldSearch$SearchFieldBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getCustomLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"paint", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTextFieldSearch$SearchFieldBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder", "com.apple.laf.AquaTextFieldSearch", "SearchFieldBorder", $STATIC},
	{"com.apple.laf.AquaUtils$JComponentPainter", "com.apple.laf.AquaUtils", "JComponentPainter", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTextFieldSearch$SearchFieldBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$SearchFieldBorder",
	"com.apple.laf.AquaTextFieldBorder",
	"com.apple.laf.AquaUtils$JComponentPainter",
	_AquaTextFieldSearch$SearchFieldBorder_FieldInfo_,
	_AquaTextFieldSearch$SearchFieldBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTextFieldSearch$SearchFieldBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$SearchFieldBorder($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$SearchFieldBorder));
}

int32_t AquaTextFieldSearch$SearchFieldBorder::hashCode() {
	 return this->$AquaTextFieldBorder::hashCode();
}

bool AquaTextFieldSearch$SearchFieldBorder::equals(Object$* arg0) {
	 return this->$AquaTextFieldBorder::equals(arg0);
}

$Object* AquaTextFieldSearch$SearchFieldBorder::clone() {
	 return this->$AquaTextFieldBorder::clone();
}

$String* AquaTextFieldSearch$SearchFieldBorder::toString() {
	 return this->$AquaTextFieldBorder::toString();
}

void AquaTextFieldSearch$SearchFieldBorder::finalize() {
	this->$AquaTextFieldBorder::finalize();
}

void AquaTextFieldSearch$SearchFieldBorder::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaTextFieldBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $($nc($($$new($AquaUtilControlSize$SizeVariant)->alterMargins(6, 31, 6, 24)))->alterInsets(3, 3, 3, 3))));
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$Widget::FRAME_TEXT_FIELD_ROUND);
}

void AquaTextFieldSearch$SearchFieldBorder::init$(AquaTextFieldSearch$SearchFieldBorder* other) {
	$AquaTextFieldBorder::init$(static_cast<$AquaTextFieldBorder*>(other));
}

void AquaTextFieldSearch$SearchFieldBorder::paint($JComponent* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	this->reallyPaintBorder = true;
	paintBorder(c, g, x, y, w, h);
	this->reallyPaintBorder = false;
}

void AquaTextFieldSearch$SearchFieldBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (!this->reallyPaintBorder) {
		return;
	}
	$AquaTextFieldBorder::paintBorder(c, g, x, y - (height % 2), width, height);
}

$Insets* AquaTextFieldSearch$SearchFieldBorder::getBorderInsets($Component* c) {
	if (this->doingLayout) {
		return $new($Insets, 0, 0, 0, 0);
	}
	if (!$AquaTextFieldSearch::hasPopupMenu($cast($JTextComponent, c))) {
		return $new($Insets, $nc($nc(this->sizeVariant)->margins)->top, $nc($nc(this->sizeVariant)->margins)->left - 7, $nc($nc(this->sizeVariant)->margins)->bottom, $nc($nc(this->sizeVariant)->margins)->right);
	}
	return $nc(this->sizeVariant)->margins;
}

$LayoutManager* AquaTextFieldSearch$SearchFieldBorder::getCustomLayout() {
	return $new($AquaTextFieldSearch$SearchFieldBorder$1, this, 0, 0);
}

AquaTextFieldSearch$SearchFieldBorder::AquaTextFieldSearch$SearchFieldBorder() {
}

$Class* AquaTextFieldSearch$SearchFieldBorder::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$SearchFieldBorder, name, initialize, &_AquaTextFieldSearch$SearchFieldBorder_ClassInfo_, allocate$AquaTextFieldSearch$SearchFieldBorder);
	return class$;
}

$Class* AquaTextFieldSearch$SearchFieldBorder::class$ = nullptr;

		} // laf
	} // apple
} // com