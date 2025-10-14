#include <javax/swing/JTable$NumberRenderer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/DefaultTableCellRenderer$UIResource.h>
#include <jcpp.h>

#undef RIGHT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $DefaultTableCellRenderer$UIResource = ::javax::swing::table::DefaultTableCellRenderer$UIResource;

namespace javax {
	namespace swing {

$MethodInfo _JTable$NumberRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTable$NumberRenderer::*)()>(&JTable$NumberRenderer::init$))},
	{}
};

$InnerClassInfo _JTable$NumberRenderer_InnerClassesInfo_[] = {
	{"javax.swing.JTable$NumberRenderer", "javax.swing.JTable", "NumberRenderer", $STATIC},
	{"javax.swing.table.DefaultTableCellRenderer$UIResource", "javax.swing.table.DefaultTableCellRenderer", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JTable$NumberRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$NumberRenderer",
	"javax.swing.table.DefaultTableCellRenderer$UIResource",
	nullptr,
	nullptr,
	_JTable$NumberRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$NumberRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$NumberRenderer($Class* clazz) {
	return $of($alloc(JTable$NumberRenderer));
}

void JTable$NumberRenderer::init$() {
	$DefaultTableCellRenderer$UIResource::init$();
	setHorizontalAlignment($JLabel::RIGHT);
}

JTable$NumberRenderer::JTable$NumberRenderer() {
}

$Class* JTable$NumberRenderer::load$($String* name, bool initialize) {
	$loadClass(JTable$NumberRenderer, name, initialize, &_JTable$NumberRenderer_ClassInfo_, allocate$JTable$NumberRenderer);
	return class$;
}

$Class* JTable$NumberRenderer::class$ = nullptr;

	} // swing
} // javax