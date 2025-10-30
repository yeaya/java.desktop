#include <bug6348946$Renderer.h>

#include <bug6348946.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $bug6348946 = ::bug6348946;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $JTable = ::javax::swing::JTable;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;

$FieldInfo _bug6348946$Renderer_FieldInfo_[] = {
	{"slider", "Ljavax/swing/JSlider;", nullptr, $PRIVATE, $field(bug6348946$Renderer, slider)},
	{}
};

$MethodInfo _bug6348946$Renderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6348946$Renderer::*)()>(&bug6348946$Renderer::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6348946$Renderer_InnerClassesInfo_[] = {
	{"bug6348946$Renderer", "bug6348946", "Renderer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6348946$Renderer_ClassInfo_ = {
	$ACC_SUPER,
	"bug6348946$Renderer",
	"java.lang.Object",
	"javax.swing.table.TableCellRenderer",
	_bug6348946$Renderer_FieldInfo_,
	_bug6348946$Renderer_MethodInfo_,
	nullptr,
	nullptr,
	_bug6348946$Renderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6348946"
};

$Object* allocate$bug6348946$Renderer($Class* clazz) {
	return $of($alloc(bug6348946$Renderer));
}

void bug6348946$Renderer::init$() {
	$set(this, slider, $new($JSlider, 0, 10));
}

$Component* bug6348946$Renderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t col) {
	int32_t val = $nc(($cast($Integer, value)))->intValue();
	$nc(this->slider)->setValue(val);
	return this->slider;
}

bug6348946$Renderer::bug6348946$Renderer() {
}

$Class* bug6348946$Renderer::load$($String* name, bool initialize) {
	$loadClass(bug6348946$Renderer, name, initialize, &_bug6348946$Renderer_ClassInfo_, allocate$bug6348946$Renderer);
	return class$;
}

$Class* bug6348946$Renderer::class$ = nullptr;