//___FILEHEADER___

#import <SpriteKit/SpriteKit.h>
#import <GameplayKit/GameplayKit.h>

@interface ___FILEBASENAME___ : SKScene

@property (nonatomic) NSMutableArray<GKEntity *> *entities;
@property (nonatomic) NSMutableDictionary<NSString*, GKGraph *> *graphs;

@end
