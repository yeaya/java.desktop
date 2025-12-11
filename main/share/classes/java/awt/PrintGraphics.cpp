#include <java/awt/PrintGraphics.h>

#include <java/awt/PrintJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _PrintGraphics_MethodInfo_[] = {
	{"getPrintJob", "()Ljava/awt/PrintJob;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrintGraphics_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.PrintGraphics",
	nullptr,
	nullptr,
	nullptr,
	_PrintGraphics_MethodInfo_
};

$Object* allocate$PrintGraphics($Class* clazz) {
	return $of($alloc(PrintGraphics));
}

$Class* PrintGraphics::load$($String* name, bool initialize) {
	$loadClass(PrintGraphics, name, initialize, &_PrintGraphics_ClassInfo_, allocate$PrintGraphics);
	return class$;
}

$Class* PrintGraphics::class$ = nullptr;

	} // awt
} // java