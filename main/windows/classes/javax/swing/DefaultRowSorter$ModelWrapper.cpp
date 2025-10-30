#include <javax/swing/DefaultRowSorter$ModelWrapper.h>

#include <javax/swing/DefaultRowSorter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;

namespace javax {
	namespace swing {

$MethodInfo _DefaultRowSorter$ModelWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DefaultRowSorter$ModelWrapper::*)()>(&DefaultRowSorter$ModelWrapper::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getIdentifier", "(I)Ljava/lang/Object;", "(I)TI;", $PUBLIC | $ABSTRACT},
	{"getModel", "()Ljava/lang/Object;", "()TM;", $PUBLIC | $ABSTRACT},
	{"getRowCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStringValueAt", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DefaultRowSorter$ModelWrapper_InnerClassesInfo_[] = {
	{"javax.swing.DefaultRowSorter$ModelWrapper", "javax.swing.DefaultRowSorter", "ModelWrapper", $PROTECTED | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultRowSorter$ModelWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.DefaultRowSorter$ModelWrapper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefaultRowSorter$ModelWrapper_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_DefaultRowSorter$ModelWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.DefaultRowSorter"
};

$Object* allocate$DefaultRowSorter$ModelWrapper($Class* clazz) {
	return $of($alloc(DefaultRowSorter$ModelWrapper));
}

void DefaultRowSorter$ModelWrapper::init$() {
}

$String* DefaultRowSorter$ModelWrapper::getStringValueAt(int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	$var($Object, o, getValueAt(row, column));
	if (o == nullptr) {
		return ""_s;
	}
	$var($String, string, $nc($of(o))->toString());
	if (string == nullptr) {
		return ""_s;
	}
	return string;
}

DefaultRowSorter$ModelWrapper::DefaultRowSorter$ModelWrapper() {
}

$Class* DefaultRowSorter$ModelWrapper::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorter$ModelWrapper, name, initialize, &_DefaultRowSorter$ModelWrapper_ClassInfo_, allocate$DefaultRowSorter$ModelWrapper);
	return class$;
}

$Class* DefaultRowSorter$ModelWrapper::class$ = nullptr;

	} // swing
} // javax