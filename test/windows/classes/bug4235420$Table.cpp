#include <bug4235420$Table.h>

#include <bug4235420.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <jcpp.h>

using $bug4235420 = ::bug4235420;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AbstractMap = ::java::util::AbstractMap;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JTable = ::javax::swing::JTable;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;

$MethodInfo _bug4235420$Table_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4235420$Table::*)()>(&bug4235420$Table::init$))},
	{"test", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4235420$Table_InnerClassesInfo_[] = {
	{"bug4235420$Table", "bug4235420", "Table", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug4235420$Table_ClassInfo_ = {
	$ACC_SUPER,
	"bug4235420$Table",
	"javax.swing.JTable",
	nullptr,
	nullptr,
	_bug4235420$Table_MethodInfo_,
	nullptr,
	nullptr,
	_bug4235420$Table_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4235420"
};

$Object* allocate$bug4235420$Table($Class* clazz) {
	return $of($alloc(bug4235420$Table));
}

void bug4235420$Table::init$() {
	$JTable::init$();
}

void bug4235420$Table::test() {
		$load($Object);
		$load($Number);
		$load($Date);
		$load($ImageIcon);
		$load($Boolean);
	$var($ClassArray, rendererClasses, $new($ClassArray, {
		$Object::class$,
		$Number::class$,
		$Date::class$,
		$ImageIcon::class$,
		$Boolean::class$
	}));
	$var($Map, copy, $new($HashMap, static_cast<$Map*>(this->defaultRenderersByColumnClass)));
	{
		$var($ClassArray, arr$, rendererClasses);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* rendererClass = arr$->get(i$);
			{
				$var($Object, obj, copy->get(rendererClass));
				if ($instanceOf($TableCellRenderer, obj)) {
					$throwNew($Error, $$str({"Failed: TableCellRenderer created for "_s, $($nc($of(rendererClass))->getClass()->getName())}));
				}
			}
		}
	}
	$var($ClassArray, editorClasses, $new($ClassArray, {
		$Object::class$,
		$Number::class$,
		$Boolean::class$
	}));
	$assign(copy, $new($HashMap, static_cast<$Map*>(this->defaultEditorsByColumnClass)));
	{
		$var($ClassArray, arr$, editorClasses);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* editorClass = arr$->get(i$);
			{
				$var($Object, obj, copy->get(editorClass));
				if ($instanceOf($TableCellEditor, obj)) {
					$throwNew($Error, $$str({"Failed: TableCellEditor created for "_s, $($nc($of(editorClass))->getClass()->getName())}));
				}
			}
		}
	}
}

bug4235420$Table::bug4235420$Table() {
}

$Class* bug4235420$Table::load$($String* name, bool initialize) {
	$loadClass(bug4235420$Table, name, initialize, &_bug4235420$Table_ClassInfo_, allocate$bug4235420$Table);
	return class$;
}

$Class* bug4235420$Table::class$ = nullptr;