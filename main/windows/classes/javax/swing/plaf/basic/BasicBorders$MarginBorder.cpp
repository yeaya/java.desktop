#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JToolBar = ::javax::swing::JToolBar;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicBorders$MarginBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicBorders$MarginBorder::*)()>(&BasicBorders$MarginBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicBorders$MarginBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicBorders$MarginBorder", "javax.swing.plaf.basic.BasicBorders", "MarginBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicBorders$MarginBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicBorders$MarginBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BasicBorders$MarginBorder_MethodInfo_,
	nullptr,
	nullptr,
	_BasicBorders$MarginBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicBorders"
};

$Object* allocate$BasicBorders$MarginBorder($Class* clazz) {
	return $of($alloc(BasicBorders$MarginBorder));
}

int32_t BasicBorders$MarginBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool BasicBorders$MarginBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* BasicBorders$MarginBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* BasicBorders$MarginBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void BasicBorders$MarginBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void BasicBorders$MarginBorder::init$() {
	$AbstractBorder::init$();
}

$Insets* BasicBorders$MarginBorder::getBorderInsets($Component* c, $Insets* insets) {
	$var($Insets, margin, nullptr);
	if ($instanceOf($AbstractButton, c)) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$assign(margin, $nc(b)->getMargin());
	} else if ($instanceOf($JToolBar, c)) {
		$var($JToolBar, t, $cast($JToolBar, c));
		$assign(margin, $nc(t)->getMargin());
	} else if ($instanceOf($JTextComponent, c)) {
		$var($JTextComponent, t, $cast($JTextComponent, c));
		$assign(margin, $nc(t)->getMargin());
	}
	$nc(insets)->top = margin != nullptr ? $nc(margin)->top : 0;
	insets->left = margin != nullptr ? margin->left : 0;
	insets->bottom = margin != nullptr ? margin->bottom : 0;
	insets->right = margin != nullptr ? margin->right : 0;
	return insets;
}

BasicBorders$MarginBorder::BasicBorders$MarginBorder() {
}

$Class* BasicBorders$MarginBorder::load$($String* name, bool initialize) {
	$loadClass(BasicBorders$MarginBorder, name, initialize, &_BasicBorders$MarginBorder_ClassInfo_, allocate$BasicBorders$MarginBorder);
	return class$;
}

$Class* BasicBorders$MarginBorder::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax