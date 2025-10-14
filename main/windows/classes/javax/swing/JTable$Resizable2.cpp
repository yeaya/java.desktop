#include <javax/swing/JTable$Resizable2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

namespace javax {
	namespace swing {

$MethodInfo _JTable$Resizable2_MethodInfo_[] = {
	{"getElementCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLowerBoundAt", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getUpperBoundAt", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"setSizeAt", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JTable$Resizable2_InnerClassesInfo_[] = {
	{"javax.swing.JTable$Resizable2", "javax.swing.JTable", "Resizable2", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JTable$Resizable2_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.JTable$Resizable2",
	nullptr,
	nullptr,
	nullptr,
	_JTable$Resizable2_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$Resizable2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$Resizable2($Class* clazz) {
	return $of($alloc(JTable$Resizable2));
}

$Class* JTable$Resizable2::load$($String* name, bool initialize) {
	$loadClass(JTable$Resizable2, name, initialize, &_JTable$Resizable2_ClassInfo_, allocate$JTable$Resizable2);
	return class$;
}

$Class* JTable$Resizable2::class$ = nullptr;

	} // swing
} // javax