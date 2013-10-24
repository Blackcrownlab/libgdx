/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_Collision_WRAP_H_
#define SWIG_Collision_WRAP_H_

struct SwigDirector_RayResultCallback : public RayResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_RayResultCallback(JNIEnv *jenv);
    virtual ~SwigDirector_RayResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(LocalRayResult &rayResult, bool normalInWorldSpace);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

struct SwigDirector_ClosestRayResultCallback : public ClosestRayResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ClosestRayResultCallback(JNIEnv *jenv, btVector3 const &rayFromWorld, btVector3 const &rayToWorld);
    virtual ~SwigDirector_ClosestRayResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(LocalRayResult &rayResult, bool normalInWorldSpace);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

struct SwigDirector_AllHitsRayResultCallback : public AllHitsRayResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_AllHitsRayResultCallback(JNIEnv *jenv, btVector3 const &rayFromWorld, btVector3 const &rayToWorld);
    virtual ~SwigDirector_AllHitsRayResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(LocalRayResult &rayResult, bool normalInWorldSpace);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

struct SwigDirector_ConvexResultCallback : public ConvexResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ConvexResultCallback(JNIEnv *jenv);
    virtual ~SwigDirector_ConvexResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(LocalConvexResult &convexResult, bool normalInWorldSpace);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

struct SwigDirector_ClosestConvexResultCallback : public ClosestConvexResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ClosestConvexResultCallback(JNIEnv *jenv, btVector3 const &convexFromWorld, btVector3 const &convexToWorld);
    virtual ~SwigDirector_ClosestConvexResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(LocalConvexResult &convexResult, bool normalInWorldSpace);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

struct SwigDirector_ContactResultCallback : public ContactResultCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ContactResultCallback(JNIEnv *jenv);
    virtual ~SwigDirector_ContactResultCallback();
    virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    virtual btScalar addSingleResult(btManifoldPoint &cp, btCollisionObjectWrapper const *colObj0Wrap, int partId0, int index0, btCollisionObjectWrapper const *colObj1Wrap, int partId1, int index1);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

class SwigDirector_ContactListener : public ContactListener, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ContactListener(JNIEnv *jenv, bool dummy);
    virtual ~SwigDirector_ContactListener();
    virtual bool onContactAdded(btManifoldPoint &cp, btCollisionObjectWrapper const &colObj0Wrap, int partId0, int index0, btCollisionObjectWrapper const &colObj1Wrap, int partId1, int index1);
    virtual bool onContactAdded(btManifoldPoint &cp, btCollisionObject const *colObj0, int partId0, int index0, btCollisionObject const *colObj1, int partId1, int index1);
    virtual bool onContactAdded(btManifoldPoint &cp, int userValue0, int partId0, int index0, int userValue1, int partId1, int index1);
    virtual bool onContactAdded(btManifoldPoint &cp, btCollisionObjectWrapper const &colObj0Wrap, int partId0, int index0, bool match0, btCollisionObjectWrapper const &colObj1Wrap, int partId1, int index1, bool match1);
    virtual bool onContactAdded(btManifoldPoint &cp, btCollisionObject const *colObj0, int partId0, int index0, bool match0, btCollisionObject const *colObj1, int partId1, int index1, bool match1);
    virtual bool onContactAdded(btManifoldPoint &cp, int userValue0, int partId0, int index0, bool match0, int userValue1, int partId1, int index1, bool match1);
    virtual bool onContactAdded(btCollisionObjectWrapper const &colObj0Wrap, int partId0, int index0, btCollisionObjectWrapper const &colObj1Wrap, int partId1, int index1);
    virtual bool onContactAdded(btCollisionObject const *colObj0, int partId0, int index0, btCollisionObject const *colObj1, int partId1, int index1);
    virtual bool onContactAdded(int userValue0, int partId0, int index0, int userValue1, int partId1, int index1);
    virtual bool onContactAdded(btCollisionObjectWrapper const &colObj0Wrap, int partId0, int index0, bool match0, btCollisionObjectWrapper const &colObj1Wrap, int partId1, int index1, bool match1);
    virtual bool onContactAdded(btCollisionObject const *colObj0, int partId0, int index0, bool match0, btCollisionObject const *colObj1, int partId1, int index1, bool match1);
    virtual bool onContactAdded(int userValue0, int partId0, int index0, bool match0, int userValue1, int partId1, int index1, bool match1);
    virtual void onContactProcessed(btManifoldPoint &cp, btCollisionObject const *colObj0, btCollisionObject const *colObj1);
    virtual void onContactProcessed(btManifoldPoint &cp, int userValue0, int userValue1);
    virtual void onContactProcessed(btManifoldPoint &cp, btCollisionObject const *colObj0, bool match0, btCollisionObject const *colObj1, bool match1);
    virtual void onContactProcessed(btManifoldPoint &cp, int userValue0, bool match0, int userValue1, bool match1);
    virtual void onContactProcessed(btCollisionObject const *colObj0, btCollisionObject const *colObj1);
    virtual void onContactProcessed(int userValue0, int userValue1);
    virtual void onContactProcessed(btCollisionObject const *colObj0, bool match0, btCollisionObject const *colObj1, bool match1);
    virtual void onContactProcessed(int userValue0, bool match0, int userValue1, bool match1);
    virtual void onContactDestroyed(int manifoldPointUserValue);
    virtual void onContactStarted(btPersistentManifold *manifold);
    virtual void onContactStarted(btCollisionObject const *colObj0, btCollisionObject const *colObj1);
    virtual void onContactStarted(int const &userValue0, int const &userValue1);
    virtual void onContactStarted(btPersistentManifold *manifold, bool const &match0, bool const &match1);
    virtual void onContactStarted(btCollisionObject const *colObj0, bool const &match0, btCollisionObject const *colObj1, bool const &match1);
    virtual void onContactStarted(int const &userValue0, bool const &match0, int const &userValue1, bool const &match1);
    virtual void onContactEnded(btPersistentManifold *manifold);
    virtual void onContactEnded(btCollisionObject const *colObj0, btCollisionObject const *colObj1);
    virtual void onContactEnded(int const &userValue0, int const &userValue1);
    virtual void onContactEnded(btPersistentManifold *manifold, bool const &match0, bool const &match1);
    virtual void onContactEnded(btCollisionObject const *colObj0, bool const &match0, btCollisionObject const *colObj1, bool const &match1);
    virtual void onContactEnded(int const &userValue0, bool const &match0, int const &userValue1, bool const &match1);
public:
    bool swig_overrides(int n) {
      return (n < 33 ? swig_override[n] : false);
    }
protected:
    bool swig_override[33];
};

class SwigDirector_ContactCache : public ContactCache, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ContactCache(JNIEnv *jenv, bool dummy);
    virtual ~SwigDirector_ContactCache();
    virtual void onContactStarted(btPersistentManifold *manifold, bool const &match0, bool const &match1);
    virtual void onContactEnded(btCollisionObject const *colObj0, bool const &match0, btCollisionObject const *colObj1, bool const &match1);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};


#endif