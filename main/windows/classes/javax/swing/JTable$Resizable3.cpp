#include <javax/swing/JTable$Resizable3.h>

#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $JTable$Resizable2 = ::javax::swing::JTable$Resizable2;

namespace javax {
	namespace swing {

$MethodInfo _JTable$Resizable3_MethodInfo_[] = {
	{"getMidPointAt", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JTable$Resizable3_InnerClassesInfo_[] = {
	{"javax.swing.JTable$Resizable3", "javax.swing.JTable", "Resizable3", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.JTable$Resizable2", "javax.swing.JTable", "Resizable2", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JTable$Resizable3_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.JTable$Resizable3",
	nullptr,
	"javax.swing.JTable$Resizable2",
	nullptr,
	_JTable$Resizable3_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$Resizable3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$Resizable3($Class* clazz) {
	return $of($alloc(JTable$Resizable3));
}

$Class* JTable$Resizable3::load$($String* name, bool initialize) {
	$loadClass(JTable$Resizable3, name, initialize, &_JTable$Resizable3_ClassInfo_, allocate$JTable$Resizable3);
	return class$;
}

$Class* JTable$Resizable3::class$ = nullptr;

	} // swing
} // javax