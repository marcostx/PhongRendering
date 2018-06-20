#define Epsilon     1E-05

#define  NUM_NORMALS    65161

#define GetXCoord(s,p) (((p) % (((s)->xsize)*((s)->ysize))) % (s)->xsize)
#define GetYCoord(s,p) (((p) % (((s)->xsize)*((s)->ysize))) / (s)->xsize)
#define GetZCoord(s,p) ((p) / (((s)->xsize)*((s)->ysize)))


#define ROUND(x) ((x < 0)?(int)(x-0.5):(int)(x+0.5))
#define GetVoxelIndex(s,v) ((v.x)+(s)->tby[(v.y)]+(s)->tbz[(v.z)])

int RADIUS_THRESHOLD=2;
int maxDist=164;

typedef struct phong_model {
  float      ka;
  float      kd;
  float      ks;
  float      ns;
  int        ndists;
  iftVector *normal;
  float     *depthBuffer;
} PhongModel;


typedef struct volume
{
    iftMatrix* normal;
    iftMatrix* center;
}iftVolumeFaces;

typedef struct object_attr {
  float opacity;
  float green;
  float red;
  float blue;
  char visibility;
} ObjectAttributes;

typedef struct gc {
  ObjectAttributes *object;
  int               numberOfObjects;
  PhongModel       *phong;
  iftMatrix        *Tinv;
  iftVector        vDir;
  iftImage         *tde;
  iftImage         *scene;
  iftImage         *label;
  iftVolumeFaces   *faces;
  iftImage         *normal;
} GraphicalContext;