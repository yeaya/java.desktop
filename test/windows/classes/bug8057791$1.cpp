#include <bug8057791$1.h>

#include <bug8057791.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <jcpp.h>

#undef BOLD
#undef EXIT_ON_CLOSE

using $bug8057791 = ::bug8057791;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;

$MethodInfo _bug8057791$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8057791$1::*)()>(&bug8057791$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8057791$1_EnclosingMethodInfo_ = {
	"bug8057791",
	"createUI",
	"()V"
};

$InnerClassInfo _bug8057791$1_InnerClassesInfo_[] = {
	{"bug8057791$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8057791$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8057791$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8057791$1_MethodInfo_,
	nullptr,
	&_bug8057791$1_EnclosingMethodInfo_,
	_bug8057791$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8057791"
};

$Object* allocate$bug8057791$1($Class* clazz) {
	return $of($alloc(bug8057791$1));
}

void bug8057791$1::init$() {
}

void bug8057791$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug8057791);
	$assignStatic($bug8057791::frame, $new($JFrame));
	$nc($bug8057791::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug8057791::list, $new($JList));
	$assignStatic($bug8057791::model, $new($DefaultListModel));
	$nc($bug8057791::model)->add(0, "@@"_s);
	$var($Font, font, $nc($bug8057791::list)->getFont());
	$var($String, var$0, $nc(font)->getFontName());
	$nc($bug8057791::list)->setFont($$new($Font, var$0, $Font::BOLD, $cast(int32_t, (font->getSize2D() * 2))));
	$nc($bug8057791::list)->setModel($bug8057791::model);
	$nc($bug8057791::list)->setSelectedIndex(0);
	$nc($bug8057791::frame)->add(static_cast<$Component*>($bug8057791::list));
	$nc($bug8057791::frame)->pack();
	$nc($bug8057791::frame)->setLocationRelativeTo(nullptr);
	$nc($bug8057791::frame)->setVisible(true);
}

bug8057791$1::bug8057791$1() {
}

$Class* bug8057791$1::load$($String* name, bool initialize) {
	$loadClass(bug8057791$1, name, initialize, &_bug8057791$1_ClassInfo_, allocate$bug8057791$1);
	return class$;
}

$Class* bug8057791$1::class$ = nullptr;