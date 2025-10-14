#include <bug6989617$MyPanel.h>

#include <bug6989617.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $bug6989617 = ::bug6989617;
using $Container = ::java::awt::Container;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;

$FieldInfo _bug6989617$MyPanel_FieldInfo_[] = {
	{"isPaintingOrigin", "Z", nullptr, $PRIVATE, $field(bug6989617$MyPanel, isPaintingOrigin$)},
	{"paintRectangle", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(bug6989617$MyPanel, paintRectangle)},
	{}
};

$MethodInfo _bug6989617$MyPanel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6989617$MyPanel::*)()>(&bug6989617$MyPanel::init$))},
	{"getPaintRectangle", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"isPaintingOrigin", "()Z", nullptr, $PUBLIC},
	{"paintImmediately", "(IIII)V", nullptr, $PUBLIC},
	{"resetPaintRectangle", "()V", nullptr, $PUBLIC},
	{"setPaintingOrigin", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6989617$MyPanel_InnerClassesInfo_[] = {
	{"bug6989617$MyPanel", "bug6989617", "MyPanel", $STATIC},
	{}
};

$ClassInfo _bug6989617$MyPanel_ClassInfo_ = {
	$ACC_SUPER,
	"bug6989617$MyPanel",
	"javax.swing.JPanel",
	nullptr,
	_bug6989617$MyPanel_FieldInfo_,
	_bug6989617$MyPanel_MethodInfo_,
	nullptr,
	nullptr,
	_bug6989617$MyPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6989617"
};

$Object* allocate$bug6989617$MyPanel($Class* clazz) {
	return $of($alloc(bug6989617$MyPanel));
}

void bug6989617$MyPanel::init$() {
	$JPanel::init$();
	this->isPaintingOrigin$ = true;
	{
		setLayout($$new($GridBagLayout));
	}
}

bool bug6989617$MyPanel::isPaintingOrigin() {
	return this->isPaintingOrigin$;
}

void bug6989617$MyPanel::setPaintingOrigin(bool paintingOrigin) {
	this->isPaintingOrigin$ = paintingOrigin;
}

void bug6989617$MyPanel::paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h) {
	$JPanel::paintImmediately(x, y, w, h);
	$set(this, paintRectangle, $new($Rectangle, x, y, w, h));
}

$Rectangle* bug6989617$MyPanel::getPaintRectangle() {
	return this->paintRectangle == nullptr ? ($Rectangle*)nullptr : $new($Rectangle, this->paintRectangle);
}

void bug6989617$MyPanel::resetPaintRectangle() {
	$set(this, paintRectangle, nullptr);
}

bug6989617$MyPanel::bug6989617$MyPanel() {
}

$Class* bug6989617$MyPanel::load$($String* name, bool initialize) {
	$loadClass(bug6989617$MyPanel, name, initialize, &_bug6989617$MyPanel_ClassInfo_, allocate$bug6989617$MyPanel);
	return class$;
}

$Class* bug6989617$MyPanel::class$ = nullptr;