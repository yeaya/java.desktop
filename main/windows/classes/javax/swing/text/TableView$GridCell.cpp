#include <javax/swing/text/TableView$GridCell.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/TableView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TableView = ::javax::swing::text::TableView;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _TableView$GridCell_MethodInfo_[] = {
	{"getColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getGridColumn", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getGridRow", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getRowCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"setGridLocation", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TableView$GridCell_InnerClassesInfo_[] = {
	{"javax.swing.text.TableView$GridCell", "javax.swing.text.TableView", "GridCell", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TableView$GridCell_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.text.TableView$GridCell",
	nullptr,
	nullptr,
	nullptr,
	_TableView$GridCell_MethodInfo_,
	nullptr,
	nullptr,
	_TableView$GridCell_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.TableView"
};

$Object* allocate$TableView$GridCell($Class* clazz) {
	return $of($alloc(TableView$GridCell));
}

$Class* TableView$GridCell::load$($String* name, bool initialize) {
	$loadClass(TableView$GridCell, name, initialize, &_TableView$GridCell_ClassInfo_, allocate$TableView$GridCell);
	return class$;
}

$Class* TableView$GridCell::class$ = nullptr;

		} // text
	} // swing
} // javax