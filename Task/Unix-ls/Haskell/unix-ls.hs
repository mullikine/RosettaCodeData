-- import Control.Monad
import Data.List
import System.Directory

dontStartWith :: Char -> [Char] -> Bool
dontStartWith = flip $ (/=) . head

main :: IO ()
main = do
  files <- getDirectoryContents "."
  mapM_ putStrLn $ sort $ filter (dontStartWith '.') files
