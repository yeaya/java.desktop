#include <javax/swing/table/TableCellRenderer.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

namespace javax {
	namespace swing {
		namespace table {

$MethodInfo _TableCellRenderer_MethodInfo_[] = {
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TableCellRenderer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.table.TableCellRenderer",
	nullptr,
	nullptr,
	nullptr,
	_TableCellRenderer_MethodInfo_
};

$Object* allocate$TableCellRenderer($Class* clazz) {
	return $of($alloc(TableCellRenderer));
}

$Class* TableCellRenderer::load$($String* name, bool initialize) {
	$loadClass(TableCellRenderer, name, initialize, &_TableCellRenderer_ClassInfo_, allocate$TableCellRenderer);
	return class$;
}

$Class* TableCellRenderer::class$ = nullptr;

		} // table
	} // swing
} // javax