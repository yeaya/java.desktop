#include <RepaintManagerFPUIScaleTest$TestListCellRenderer.h>

#include <RepaintManagerFPUIScaleTest.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $RepaintManagerFPUIScaleTest = ::RepaintManagerFPUIScaleTest;
using $Component = ::java::awt::Component;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;

$MethodInfo _RepaintManagerFPUIScaleTest$TestListCellRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RepaintManagerFPUIScaleTest$TestListCellRenderer::*)()>(&RepaintManagerFPUIScaleTest$TestListCellRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RepaintManagerFPUIScaleTest$TestListCellRenderer_InnerClassesInfo_[] = {
	{"RepaintManagerFPUIScaleTest$TestListCellRenderer", "RepaintManagerFPUIScaleTest", "TestListCellRenderer", $STATIC},
	{}
};

$ClassInfo _RepaintManagerFPUIScaleTest$TestListCellRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"RepaintManagerFPUIScaleTest$TestListCellRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	nullptr,
	_RepaintManagerFPUIScaleTest$TestListCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_RepaintManagerFPUIScaleTest$TestListCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RepaintManagerFPUIScaleTest"
};

$Object* allocate$RepaintManagerFPUIScaleTest$TestListCellRenderer($Class* clazz) {
	return $of($alloc(RepaintManagerFPUIScaleTest$TestListCellRenderer));
}

void RepaintManagerFPUIScaleTest$TestListCellRenderer::init$() {
	$DefaultListCellRenderer::init$();
}

$Component* RepaintManagerFPUIScaleTest$TestListCellRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$var($Component, retValue, $DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus));
	setIcon($$new($ImageIcon, $($RepaintManagerFPUIScaleTest::createTestImage(20, 10, index))));
	return retValue;
}

RepaintManagerFPUIScaleTest$TestListCellRenderer::RepaintManagerFPUIScaleTest$TestListCellRenderer() {
}

$Class* RepaintManagerFPUIScaleTest$TestListCellRenderer::load$($String* name, bool initialize) {
	$loadClass(RepaintManagerFPUIScaleTest$TestListCellRenderer, name, initialize, &_RepaintManagerFPUIScaleTest$TestListCellRenderer_ClassInfo_, allocate$RepaintManagerFPUIScaleTest$TestListCellRenderer);
	return class$;
}

$Class* RepaintManagerFPUIScaleTest$TestListCellRenderer::class$ = nullptr;