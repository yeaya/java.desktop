#include <javax/swing/JRootPane$RootLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Rectangle = ::java::awt::Rectangle;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;

namespace javax {
	namespace swing {

$FieldInfo _JRootPane$RootLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(JRootPane$RootLayout, this$0)},
	{}
};

$MethodInfo _JRootPane$RootLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED, $method(static_cast<void(JRootPane$RootLayout::*)($JRootPane*)>(&JRootPane$RootLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC},
	{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRootPane$RootLayout_InnerClassesInfo_[] = {
	{"javax.swing.JRootPane$RootLayout", "javax.swing.JRootPane", "RootLayout", $PROTECTED},
	{}
};

$ClassInfo _JRootPane$RootLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JRootPane$RootLayout",
	"java.lang.Object",
	"java.awt.LayoutManager2,java.io.Serializable",
	_JRootPane$RootLayout_FieldInfo_,
	_JRootPane$RootLayout_MethodInfo_,
	nullptr,
	nullptr,
	_JRootPane$RootLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JRootPane"
};

$Object* allocate$JRootPane$RootLayout($Class* clazz) {
	return $of($alloc(JRootPane$RootLayout));
}

int32_t JRootPane$RootLayout::hashCode() {
	 return this->$LayoutManager2::hashCode();
}

bool JRootPane$RootLayout::equals(Object$* arg0) {
	 return this->$LayoutManager2::equals(arg0);
}

$Object* JRootPane$RootLayout::clone() {
	 return this->$LayoutManager2::clone();
}

$String* JRootPane$RootLayout::toString() {
	 return this->$LayoutManager2::toString();
}

void JRootPane$RootLayout::finalize() {
	this->$LayoutManager2::finalize();
}

void JRootPane$RootLayout::init$($JRootPane* this$0) {
	$set(this, this$0, this$0);
}

$Dimension* JRootPane$RootLayout::preferredLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, rd, nullptr);
	$var($Dimension, mbd, nullptr);
	$var($Insets, i, this->this$0->getInsets());
	if (this->this$0->contentPane != nullptr) {
		$assign(rd, $nc(this->this$0->contentPane)->getPreferredSize());
	} else {
		$assign(rd, $nc(parent)->getSize());
	}
	if (this->this$0->menuBar != nullptr && $nc(this->this$0->menuBar)->isVisible()) {
		$assign(mbd, $nc(this->this$0->menuBar)->getPreferredSize());
	} else {
		$assign(mbd, $new($Dimension, 0, 0));
	}
	return $new($Dimension, $Math::max($nc(rd)->width, $nc(mbd)->width) + $nc(i)->left + i->right, $nc(rd)->height + $nc(mbd)->height + i->top + i->bottom);
}

$Dimension* JRootPane$RootLayout::minimumLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, rd, nullptr);
	$var($Dimension, mbd, nullptr);
	$var($Insets, i, this->this$0->getInsets());
	if (this->this$0->contentPane != nullptr) {
		$assign(rd, $nc(this->this$0->contentPane)->getMinimumSize());
	} else {
		$assign(rd, $nc(parent)->getSize());
	}
	if (this->this$0->menuBar != nullptr && $nc(this->this$0->menuBar)->isVisible()) {
		$assign(mbd, $nc(this->this$0->menuBar)->getMinimumSize());
	} else {
		$assign(mbd, $new($Dimension, 0, 0));
	}
	return $new($Dimension, $Math::max($nc(rd)->width, $nc(mbd)->width) + $nc(i)->left + i->right, $nc(rd)->height + $nc(mbd)->height + i->top + i->bottom);
}

$Dimension* JRootPane$RootLayout::maximumLayoutSize($Container* target) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, rd, nullptr);
	$var($Dimension, mbd, nullptr);
	$var($Insets, i, this->this$0->getInsets());
	if (this->this$0->menuBar != nullptr && $nc(this->this$0->menuBar)->isVisible()) {
		$assign(mbd, $nc(this->this$0->menuBar)->getMaximumSize());
	} else {
		$assign(mbd, $new($Dimension, 0, 0));
	}
	if (this->this$0->contentPane != nullptr) {
		$assign(rd, $nc(this->this$0->contentPane)->getMaximumSize());
	} else {
		$assign(rd, $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE - $nc(i)->top - i->bottom - $nc(mbd)->height - 1));
	}
	return $new($Dimension, $Math::max($nc(rd)->width, $nc(mbd)->width) + $nc(i)->left + i->right, $nc(rd)->height + $nc(mbd)->height + i->top + i->bottom);
}

void JRootPane$RootLayout::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, b, $nc(parent)->getBounds());
	$var($Insets, i, this->this$0->getInsets());
	int32_t contentY = 0;
	int32_t w = $nc(b)->width - $nc(i)->right - i->left;
	int32_t h = b->height - i->top - i->bottom;
	if (this->this$0->layeredPane != nullptr) {
		$nc(this->this$0->layeredPane)->setBounds(i->left, i->top, w, h);
	}
	if (this->this$0->glassPane != nullptr) {
		$nc(this->this$0->glassPane)->setBounds(i->left, i->top, w, h);
	}
	if (this->this$0->menuBar != nullptr && $nc(this->this$0->menuBar)->isVisible()) {
		$var($Dimension, mbd, $nc(this->this$0->menuBar)->getPreferredSize());
		$nc(this->this$0->menuBar)->setBounds(0, 0, w, $nc(mbd)->height);
		contentY += $nc(mbd)->height;
	}
	if (this->this$0->contentPane != nullptr) {
		$nc(this->this$0->contentPane)->setBounds(0, contentY, w, h - contentY);
	}
}

void JRootPane$RootLayout::addLayoutComponent($String* name, $Component* comp) {
}

void JRootPane$RootLayout::removeLayoutComponent($Component* comp) {
}

void JRootPane$RootLayout::addLayoutComponent($Component* comp, Object$* constraints) {
}

float JRootPane$RootLayout::getLayoutAlignmentX($Container* target) {
	return 0.0f;
}

float JRootPane$RootLayout::getLayoutAlignmentY($Container* target) {
	return 0.0f;
}

void JRootPane$RootLayout::invalidateLayout($Container* target) {
}

JRootPane$RootLayout::JRootPane$RootLayout() {
}

$Class* JRootPane$RootLayout::load$($String* name, bool initialize) {
	$loadClass(JRootPane$RootLayout, name, initialize, &_JRootPane$RootLayout_ClassInfo_, allocate$JRootPane$RootLayout);
	return class$;
}

$Class* JRootPane$RootLayout::class$ = nullptr;

	} // swing
} // javax