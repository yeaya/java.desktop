#include <javax/swing/TransferHandler$DropLocation.h>

#include <java/awt/Point.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/TransferHandler.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler = ::javax::swing::TransferHandler;

namespace javax {
	namespace swing {

$FieldInfo _TransferHandler$DropLocation_FieldInfo_[] = {
	{"dropPoint", "Ljava/awt/Point;", nullptr, $PRIVATE | $FINAL, $field(TransferHandler$DropLocation, dropPoint)},
	{}
};

$MethodInfo _TransferHandler$DropLocation_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Point;)V", nullptr, $PROTECTED, $method(static_cast<void(TransferHandler$DropLocation::*)($Point*)>(&TransferHandler$DropLocation::init$))},
	{"getDropPoint", "()Ljava/awt/Point;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Point*(TransferHandler$DropLocation::*)()>(&TransferHandler$DropLocation::getDropPoint))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransferHandler$DropLocation_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TransferHandler$DropLocation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.TransferHandler$DropLocation",
	"java.lang.Object",
	nullptr,
	_TransferHandler$DropLocation_FieldInfo_,
	_TransferHandler$DropLocation_MethodInfo_,
	nullptr,
	nullptr,
	_TransferHandler$DropLocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$DropLocation($Class* clazz) {
	return $of($alloc(TransferHandler$DropLocation));
}

void TransferHandler$DropLocation::init$($Point* dropPoint) {
	if (dropPoint == nullptr) {
		$throwNew($IllegalArgumentException, "Point cannot be null"_s);
	}
	$set(this, dropPoint, $new($Point, dropPoint));
}

$Point* TransferHandler$DropLocation::getDropPoint() {
	return $new($Point, this->dropPoint);
}

$String* TransferHandler$DropLocation::toString() {
	return $str({$($of(this)->getClass()->getName()), "[dropPoint="_s, this->dropPoint, "]"_s});
}

TransferHandler$DropLocation::TransferHandler$DropLocation() {
}

$Class* TransferHandler$DropLocation::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$DropLocation, name, initialize, &_TransferHandler$DropLocation_ClassInfo_, allocate$TransferHandler$DropLocation);
	return class$;
}

$Class* TransferHandler$DropLocation::class$ = nullptr;

	} // swing
} // javax