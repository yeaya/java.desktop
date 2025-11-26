#include <sun/swing/text/html/FrameEditorPaneTag.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace swing {
		namespace text {
			namespace html {

$ClassInfo _FrameEditorPaneTag_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.text.html.FrameEditorPaneTag"
};

$Object* allocate$FrameEditorPaneTag($Class* clazz) {
	return $of($alloc(FrameEditorPaneTag));
}

$Class* FrameEditorPaneTag::load$($String* name, bool initialize) {
	$loadClass(FrameEditorPaneTag, name, initialize, &_FrameEditorPaneTag_ClassInfo_, allocate$FrameEditorPaneTag);
	return class$;
}

$Class* FrameEditorPaneTag::class$ = nullptr;

			} // html
		} // text
	} // swing
} // sun