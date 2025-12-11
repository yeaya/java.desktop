#include <javax/swing/Painter.h>

#include <java/awt/Graphics2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _Painter_MethodInfo_[] = {
	{"paint", "(Ljava/awt/Graphics2D;Ljava/lang/Object;II)V", "(Ljava/awt/Graphics2D;TT;II)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Painter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.Painter",
	nullptr,
	nullptr,
	nullptr,
	_Painter_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$Painter($Class* clazz) {
	return $of($alloc(Painter));
}

$Class* Painter::load$($String* name, bool initialize) {
	$loadClass(Painter, name, initialize, &_Painter_ClassInfo_, allocate$Painter);
	return class$;
}

$Class* Painter::class$ = nullptr;

	} // swing
} // javax