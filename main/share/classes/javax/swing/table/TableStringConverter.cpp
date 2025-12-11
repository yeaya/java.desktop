#include <javax/swing/table/TableStringConverter.h>

#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace table {

$MethodInfo _TableStringConverter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TableStringConverter::*)()>(&TableStringConverter::init$))},
	{"toString", "(Ljavax/swing/table/TableModel;II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TableStringConverter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.table.TableStringConverter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TableStringConverter_MethodInfo_
};

$Object* allocate$TableStringConverter($Class* clazz) {
	return $of($alloc(TableStringConverter));
}

void TableStringConverter::init$() {
}

TableStringConverter::TableStringConverter() {
}

$Class* TableStringConverter::load$($String* name, bool initialize) {
	$loadClass(TableStringConverter, name, initialize, &_TableStringConverter_ClassInfo_, allocate$TableStringConverter);
	return class$;
}

$Class* TableStringConverter::class$ = nullptr;

		} // table
	} // swing
} // javax