#include <javax/swing/JTable$IconRenderer.h>

#include <javax/swing/Icon.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/DefaultTableCellRenderer$UIResource.h>
#include <jcpp.h>

#undef CENTER

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $DefaultTableCellRenderer$UIResource = ::javax::swing::table::DefaultTableCellRenderer$UIResource;

namespace javax {
	namespace swing {

$MethodInfo _JTable$IconRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTable$IconRenderer::*)()>(&JTable$IconRenderer::init$))},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTable$IconRenderer_InnerClassesInfo_[] = {
	{"javax.swing.JTable$IconRenderer", "javax.swing.JTable", "IconRenderer", $STATIC},
	{"javax.swing.table.DefaultTableCellRenderer$UIResource", "javax.swing.table.DefaultTableCellRenderer", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JTable$IconRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$IconRenderer",
	"javax.swing.table.DefaultTableCellRenderer$UIResource",
	nullptr,
	nullptr,
	_JTable$IconRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$IconRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$IconRenderer($Class* clazz) {
	return $of($alloc(JTable$IconRenderer));
}

void JTable$IconRenderer::init$() {
	$DefaultTableCellRenderer$UIResource::init$();
	setHorizontalAlignment($JLabel::CENTER);
}

void JTable$IconRenderer::setValue(Object$* value) {
	setIcon(($instanceOf($Icon, value)) ? $cast($Icon, value) : ($Icon*)nullptr);
}

JTable$IconRenderer::JTable$IconRenderer() {
}

$Class* JTable$IconRenderer::load$($String* name, bool initialize) {
	$loadClass(JTable$IconRenderer, name, initialize, &_JTable$IconRenderer_ClassInfo_, allocate$JTable$IconRenderer);
	return class$;
}

$Class* JTable$IconRenderer::class$ = nullptr;

	} // swing
} // javax