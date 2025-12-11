#include <sun/font/GlyphDisposedListener.h>

#include <java/util/ArrayList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$MethodInfo _GlyphDisposedListener_MethodInfo_[] = {
	{"glyphDisposed", "(Ljava/util/ArrayList;)V", "(Ljava/util/ArrayList<Ljava/lang/Long;>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GlyphDisposedListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.font.GlyphDisposedListener",
	nullptr,
	nullptr,
	nullptr,
	_GlyphDisposedListener_MethodInfo_
};

$Object* allocate$GlyphDisposedListener($Class* clazz) {
	return $of($alloc(GlyphDisposedListener));
}

$Class* GlyphDisposedListener::load$($String* name, bool initialize) {
	$loadClass(GlyphDisposedListener, name, initialize, &_GlyphDisposedListener_ClassInfo_, allocate$GlyphDisposedListener);
	return class$;
}

$Class* GlyphDisposedListener::class$ = nullptr;

	} // font
} // sun