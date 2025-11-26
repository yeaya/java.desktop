#ifndef _com_sun_media_sound_ModelConnectionBlock_h_
#define _com_sun_media_sound_ModelConnectionBlock_h_
//$ class com.sun.media.sound.ModelConnectionBlock
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelDestination;
				class ModelSource;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelConnectionBlock : public ::java::lang::Object {
	$class(ModelConnectionBlock, 0, ::java::lang::Object)
public:
	ModelConnectionBlock();
	void init$();
	void init$(double scale, ::com::sun::media::sound::ModelDestination* destination);
	void init$(::com::sun::media::sound::ModelSource* source, ::com::sun::media::sound::ModelDestination* destination);
	void init$(::com::sun::media::sound::ModelSource* source, double scale, ::com::sun::media::sound::ModelDestination* destination);
	void init$(::com::sun::media::sound::ModelSource* source, ::com::sun::media::sound::ModelSource* control, ::com::sun::media::sound::ModelDestination* destination);
	void init$(::com::sun::media::sound::ModelSource* source, ::com::sun::media::sound::ModelSource* control, double scale, ::com::sun::media::sound::ModelDestination* destination);
	void addSource(::com::sun::media::sound::ModelSource* source);
	::com::sun::media::sound::ModelDestination* getDestination();
	double getScale();
	$Array<::com::sun::media::sound::ModelSource>* getSources();
	void setDestination(::com::sun::media::sound::ModelDestination* destination);
	void setScale(double scale);
	void setSources($Array<::com::sun::media::sound::ModelSource>* source);
	static $Array<::com::sun::media::sound::ModelSource>* no_sources;
	$Array<::com::sun::media::sound::ModelSource>* sources = nullptr;
	double scale = 0.0;
	::com::sun::media::sound::ModelDestination* destination = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelConnectionBlock_h_