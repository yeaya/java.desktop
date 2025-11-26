#include <javax/swing/JTable$DateRenderer.h>

#include <java/text/DateFormat.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/DefaultTableCellRenderer$UIResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $Format = ::java::text::Format;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $DefaultTableCellRenderer$UIResource = ::javax::swing::table::DefaultTableCellRenderer$UIResource;

namespace javax {
	namespace swing {

$FieldInfo _JTable$DateRenderer_FieldInfo_[] = {
	{"formatter", "Ljava/text/DateFormat;", nullptr, 0, $field(JTable$DateRenderer, formatter)},
	{}
};

$MethodInfo _JTable$DateRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTable$DateRenderer::*)()>(&JTable$DateRenderer::init$))},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTable$DateRenderer_InnerClassesInfo_[] = {
	{"javax.swing.JTable$DateRenderer", "javax.swing.JTable", "DateRenderer", $STATIC},
	{"javax.swing.table.DefaultTableCellRenderer$UIResource", "javax.swing.table.DefaultTableCellRenderer", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JTable$DateRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$DateRenderer",
	"javax.swing.table.DefaultTableCellRenderer$UIResource",
	nullptr,
	_JTable$DateRenderer_FieldInfo_,
	_JTable$DateRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$DateRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$DateRenderer($Class* clazz) {
	return $of($alloc(JTable$DateRenderer));
}

void JTable$DateRenderer::init$() {
	$DefaultTableCellRenderer$UIResource::init$();
}

void JTable$DateRenderer::setValue(Object$* value) {
	if (this->formatter == nullptr) {
		$set(this, formatter, $DateFormat::getDateInstance());
	}
	setText((value == nullptr) ? ""_s : $($nc(this->formatter)->format(value)));
}

JTable$DateRenderer::JTable$DateRenderer() {
}

$Class* JTable$DateRenderer::load$($String* name, bool initialize) {
	$loadClass(JTable$DateRenderer, name, initialize, &_JTable$DateRenderer_ClassInfo_, allocate$JTable$DateRenderer);
	return class$;
}

$Class* JTable$DateRenderer::class$ = nullptr;

	} // swing
} // javax