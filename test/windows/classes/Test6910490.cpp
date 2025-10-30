#include <Test6910490.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/MatteBorder.h>
#include <jcpp.h>

#undef HORIZONTAL_SPLIT
#undef RED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JApplet = ::javax::swing::JApplet;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSplitPane = ::javax::swing::JSplitPane;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $MatteBorder = ::javax::swing::border::MatteBorder;

$MethodInfo _Test6910490_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6910490::*)()>(&Test6910490::init$))},
	{"create", "(Ljava/lang/String;Ljava/awt/Dimension;Ljavax/swing/border/MatteBorder;)Ljavax/swing/JScrollPane;", nullptr, $PRIVATE, $method(static_cast<$JScrollPane*(Test6910490::*)($String*,$Dimension*,$MatteBorder*)>(&Test6910490::create))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test6910490_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6910490",
	"javax.swing.JApplet",
	"javax.swing.Icon",
	nullptr,
	_Test6910490_MethodInfo_
};

$Object* allocate$Test6910490($Class* clazz) {
	return $of($alloc(Test6910490));
}

$String* Test6910490::toString() {
	 return this->$JApplet::toString();
}

int32_t Test6910490::hashCode() {
	 return this->$JApplet::hashCode();
}

bool Test6910490::equals(Object$* arg0) {
	 return this->$JApplet::equals(arg0);
}

$Object* Test6910490::clone() {
	 return this->$JApplet::clone();
}

void Test6910490::finalize() {
	this->$JApplet::finalize();
}

void Test6910490::init$() {
	$JApplet::init$();
}

void Test6910490::init() {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $new($Insets, 10, 10, 10, 10));
	int32_t var$0 = getWidth() / 2;
	$var($Dimension, size, $new($Dimension, var$0, getHeight()));
	$init($Color);
	$var($Component, var$1, static_cast<$Component*>(create("Color"_s, size, $$new($MatteBorder, insets, $Color::RED))));
	$var($JSplitPane, pane, $new($JSplitPane, $JSplitPane::HORIZONTAL_SPLIT, var$1, $(create("Icon"_s, size, $$new($MatteBorder, insets, static_cast<$Icon*>(this))))));
	pane->setDividerLocation(size->width - pane->getDividerSize() / 2);
	add(static_cast<$Component*>(pane));
}

$JScrollPane* Test6910490::create($String* name, $Dimension* size, $MatteBorder* border) {
	$var($JButton, button, $new($JButton, name));
	button->setPreferredSize(size);
	button->setBorder(border);
	return $new($JScrollPane, button);
}

int32_t Test6910490::getIconWidth() {
	return 10;
}

int32_t Test6910490::getIconHeight() {
	return 10;
}

void Test6910490::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$init($Color);
	$nc(g)->setColor($Color::RED);
	int32_t var$0 = x;
	int32_t var$1 = y;
	int32_t var$2 = getIconWidth();
	g->fillRect(var$0, var$1, var$2, getIconHeight());
}

Test6910490::Test6910490() {
}

$Class* Test6910490::load$($String* name, bool initialize) {
	$loadClass(Test6910490, name, initialize, &_Test6910490_ClassInfo_, allocate$Test6910490);
	return class$;
}

$Class* Test6910490::class$ = nullptr;