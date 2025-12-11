#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane$JPopupMenuUIResource.h>

#include <javax/swing/JPopupMenu.h>
#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthInternalFrameTitlePane$JPopupMenuUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthInternalFrameTitlePane$JPopupMenuUIResource::*)()>(&SynthInternalFrameTitlePane$JPopupMenuUIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthInternalFrameTitlePane$JPopupMenuUIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthInternalFrameTitlePane$JPopupMenuUIResource", "javax.swing.plaf.synth.SynthInternalFrameTitlePane", "JPopupMenuUIResource", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthInternalFrameTitlePane$JPopupMenuUIResource_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthInternalFrameTitlePane$JPopupMenuUIResource",
	"javax.swing.JPopupMenu",
	"javax.swing.plaf.UIResource",
	nullptr,
	_SynthInternalFrameTitlePane$JPopupMenuUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_SynthInternalFrameTitlePane$JPopupMenuUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthInternalFrameTitlePane"
};

$Object* allocate$SynthInternalFrameTitlePane$JPopupMenuUIResource($Class* clazz) {
	return $of($alloc(SynthInternalFrameTitlePane$JPopupMenuUIResource));
}

$String* SynthInternalFrameTitlePane$JPopupMenuUIResource::toString() {
	 return this->$JPopupMenu::toString();
}

int32_t SynthInternalFrameTitlePane$JPopupMenuUIResource::hashCode() {
	 return this->$JPopupMenu::hashCode();
}

bool SynthInternalFrameTitlePane$JPopupMenuUIResource::equals(Object$* arg0) {
	 return this->$JPopupMenu::equals(arg0);
}

$Object* SynthInternalFrameTitlePane$JPopupMenuUIResource::clone() {
	 return this->$JPopupMenu::clone();
}

void SynthInternalFrameTitlePane$JPopupMenuUIResource::finalize() {
	this->$JPopupMenu::finalize();
}

void SynthInternalFrameTitlePane$JPopupMenuUIResource::init$() {
	$JPopupMenu::init$();
}

SynthInternalFrameTitlePane$JPopupMenuUIResource::SynthInternalFrameTitlePane$JPopupMenuUIResource() {
}

$Class* SynthInternalFrameTitlePane$JPopupMenuUIResource::load$($String* name, bool initialize) {
	$loadClass(SynthInternalFrameTitlePane$JPopupMenuUIResource, name, initialize, &_SynthInternalFrameTitlePane$JPopupMenuUIResource_ClassInfo_, allocate$SynthInternalFrameTitlePane$JPopupMenuUIResource);
	return class$;
}

$Class* SynthInternalFrameTitlePane$JPopupMenuUIResource::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax