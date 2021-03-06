void mergeSort(float*, float*);
void mergeSort_rsort(float*, float*);
void mergeSort_CacheAware(float*, float*, int);
void mergeSort_Serial(float*, float*);
int mergeSortInner(float*, float*, float*, int);
void sseSortNetwork7(float*);
void merge2(float*, float*, float*, const int, const int);
void intelSort1(float*);
void intelSort2(float*);
static void oddEven16(float*);
static void inline oddEven16(__m128*, __m128*, __m128*, __m128*);
static void bitonicKernel4b4(float*);
static void inline bitonicKernel4b4(__m128*, __m128*);
static void inline bitonicKernel4b4nr(__m128*, __m128*);
void bitonicKernel8b8(float*);
void bitonicKernel8b8(__m128*, __m128*, __m128*, __m128*);
static void bitonicKernel16b16(float*);
static void bitonicKernel16b16(__m128*, __m128*, __m128*, __m128*, __m128*, __m128*, __m128*, __m128*);
static void bitonicKernel16b16nr(__m128&, __m128&, __m128&, __m128&, __m128&, __m128&, __m128&, __m128&);
static void reverse4regs(__m128&, __m128&, __m128&, __m128&);
void boseNelson32inRegister(float*);
static void mergeSort_merge(float*, float*, int);
static void mergeSort_merge16(float*, float*, int);
static void mergeSort_mergeSerial(float*, float*, int);

