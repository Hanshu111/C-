//顺序表
#include<stdio.h>
#include<stdlib.h>

typedef int E;  //元素类型为int，先起个别名

struct List {
    E * array;  //指向顺序表的底层数组
    int capacity;   //数组的容量
    int size;   //表中的元素数量
};

typedef struct List * ArrayList;    //因为是数组实现，所以就要ArrayList,这里直接将List的指针起别名

_Bool initList(ArrayList list){      //这里就默认所有的顺序表初始大小都为10
    list->array = malloc(sizeof(E) * 10);    //使用malloc函数申请10个int大小的内存空间，作为底层数组使用
    if(list->array == NULL) return 0;   //需要判断如果申请的结果为NULL的话表示内存空间申请失败
    list->capacity = 10;        //容量同样设定为10
    list->size = 0;             //元素数量默认为0
    return 1;   //正常情况下返回true
}



//插入元素  index:位序  element：元素
_Bool insertList(ArrayList List, E element, int index){
    if(index < 1 || index > List->size + 1) return 0;   //如果在非法位置插入，返回0表示插入操作执行失败

    // 拆入元素>分配元素 扩容:capacity
    if(List->size == List->capacity) {      //如果size已经到达最大的容量了，肯定是插不进去了，那么此时就需要扩容
        int newCapacity = List->capacity + (List->capacity >> 1);     //我们先计算一下新的容量大小，这里取1.5倍原长度，想扩多少都可以
        E * newArray = realloc(List->array, sizeof(E) * newCapacity);   //这里我们使用新的函数realloc重新申请更大的内存空间
        if(newCapacity == NULL) return 0;   //如果申请失败，那么就没办法插入，只能返回0表示插入失败
        List->capacity = newArray;
        List->capacity = newCapacity;
    }

    for (int i = List->size; i > index -1 ; i--)   //先使用for循环将待插入位置后续的元素全部丢到后一位
        List->array[i] = List->array[i - 1];
    List->array[index - 1] = element;   //挪完之后，位置就腾出来了，直接设定即可
    List->size++;   //别忘了插入之后相当于多了一个元素，记得size + 1
    return 1;
}

void printList(ArrayList list){     //编写一个函数用于打印表当前的数据
    for (int i = 0; i < list->size; ++i) //表里面每个元素都拿出来打印一个
        printf("%d ",list->array[i]);
    printf("\n");
}

int main(){
    struct List list;   //创建新的结构体变量
    if(initList(&list)){    //对其进行初始化，如果失败就直接结束
        for (int i =0; i < 30; ++i)
            insertList(&list,i*10,i+1)


    } else{
        printf("顺序表初始化失败，无法启动程序！");
    }

}





